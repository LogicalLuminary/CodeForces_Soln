#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
ll intpow(ll base, ll exp) {
    ll result = 1;
    while (exp > 0) {
        result *= base;
        exp--;
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
                
        ll a,b,l;
        cin >> a >> b >> l;

        int temp= l;
    int x=0,y= 0;
    vector<ll>vec ;

    
while(ll num1=intpow(a,x) <= temp){
    num1= intpow(a,x);
    while( intpow(b,y) <= temp){
       ll num2=intpow(b,y);
        //cout<<num2<<" ";
        if( temp % (num2*num1) == 0)vec.push_back(num1*num2);
    //cout<<num1<<" "<<num2<<" "<<y<<endl;
        y++;
    }
    //cout<<"x"<<x;
    x++;
    
    y=0;
 } //cout<<endl;
// // for(auto &i :vec){
// //     cout<<i<<" ";
// // }
set<ll> uniquek(vec.begin(),vec.end());

cout<<uniquek.size()<<endl;



    }

    return 0;
}