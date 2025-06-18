#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
                
        ll cir;
        cin >> cir ;
        vector<pair<ll,ll>> circoor(cir); 

    for(int i=0;i<cir;i++){
        cin >> circoor[i].first;
        cin >> circoor[i].second ;
    }
    ll x1,x2,y1,y2 ;
    cin >> x1 >> y1 >> x2 >> y2 ;

    ll xdis = x2-x1;
    ll ydis = y2-y1 ;
    ll min;
    for(int i=0; i<cir; i++){

        circoor[i].first -= x2;
        circoor[i].second -= y2;

        ll dist = circoor[i].first*circoor[i].first+circoor[i].second*circoor[i].second ;
        if(i == 0 ) min = dist;
        else{
            if(min>dist) min = dist;
       }
       //cout<<min<<endl;

    }
    
    if(min > xdis*xdis + ydis*ydis) cout<<"YES\n" ;
    else cout<<"NO\n";



    }

    return 0;
}