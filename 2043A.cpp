#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
                
        ll n;
        cin >> n;
        ll ans =1;
        while(n/4){
            n= n/4;
            ans*=2;
        }
        cout<<ans<<endl;



    }

    return 0;
}