#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
                
        ll k,q;
        cin >> k >> q ;
        vector<ll> ai(k);
        vector<ll> player(q);
for(auto &i : ai){
    cin >> i;
}
for(auto &i:player){
    cin >> i ;
}
for(ll i=0; i<q;i++){
    cout<< min(ai[0]-1,player[i])<< " ";
}
cout<<endl;






    }

    return 0;
}