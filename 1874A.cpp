#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
                
        ll n , m , k;
        cin >> n >> m >> k;

        vector<ll> ai(n);
        vector<ll> bi(m);
        ll sum =0;ll min = INT64_MAX;
        ll maxi1=-1;
        for( ll i=0; i<n;i++){
            cin >> ai[i];
            sum += ai[i];
            if(min > ai[i]) min = ai[i];
            if(maxi1 < ai[i]) maxi1 = ai[i];
        }
        ll maxi=-1; ll mini2 =INT64_MAX;
        for(ll i=0; i<m; i++){
            cin >> bi[i];
            if(maxi < bi[i]) maxi = bi[i] ;
            if(mini2 > bi[i]) mini2 = bi[i]; 
        }
    ll ans =0;
   // cout<<sum<<endl;
   // cout<<maxi<<" "<<min<<endl;
        if(maxi > min  && (k%2 ==1)){
            ans = sum-min +maxi;
            //cout<<"i";
        }
        else if(maxi < min && (k%2 == 0 ) && k!=0){
            ans = sum + mini2- maxi1;
        }
        else{
            ans = sum;
        }
    
    cout<<ans<<endl;
    





    }

    return 0;
}