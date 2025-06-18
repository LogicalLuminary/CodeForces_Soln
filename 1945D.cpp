#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
                
        ll n,m;
        cin >> n >> m ;
        vector<ll> ai(n+1);
        vector<ll> bi(n+1);

        for(int i=1; i<=n ; i++){
            cin >> ai[i];
        }
        for(int i=1; i<=n ; i++){
            cin >> bi[i];
        }

    ll pos = n+1;
    for(int i=m+1; i<=n; i++){
        if(ai[i]<= bi[i]){
            pos = i;
            break;
        }
    }
ll cost=0;
for(int  i = pos; i<= n; i++){
    cost += min(ai[i],bi[i]) ;

}
//cout<<cost<<endl;




    vector<ll> sumarr(pos+2);
    sumarr[1] = bi[1];
    for(int i=1;i<=pos; i++ ){
        sumarr[i+1] = sumarr[i]+bi[i+1];
    }
    // for(auto i: sumarr){
    //     cout<<i<<" ";
    // }
    // cout<<endl;





    vector<ll> ans(m+1);

    for(int i=1; i<=m;i++){
        ans[i] = sumarr[pos-1]-sumarr[i]+ai[i];
    }
    // for(auto i: ans){
    //     cout<<i<<" ";
    // }
    //cout<<endl;
    cost+= (*min_element(ans.begin()+1,ans.end()));

    cout<<cost<<endl;

    }

    return 0;
}

