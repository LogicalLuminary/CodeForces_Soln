#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {
    ll l,r,x,y,k;
    cin >> l >> r >> x >> y >> k ;
    bool ans =false;
    for(ll i=l;i<= r; i++){
        if(i<=y*k && i>= x*k){
            if(i%k == 0) {
                ans =1;break;}
        }
    }
    if(ans ==1)cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}