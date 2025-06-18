#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
                
        ll n , m , k;
        cin >> n >> m >> k ;
        if( k>=4 ){
            cout<<0<<endl;continue;
        }
        if(m<=n){
            if(k==1) cout<<1;
            if(k==2) cout<<m;
            if (k==3) cout<<0;
            cout<<endl;
            continue;
        }

        if(k ==1){cout<<1<<endl;}
        else if(k == 2){
            cout<<n-1+m/n<<endl;
        }
        else if(k ==3){
            ll ans  = m + 1 - 1 - (n-1+m/n);
            cout<<ans<<endl;
        }



    }

    return 0;
}