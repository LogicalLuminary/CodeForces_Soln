#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
                
        ll a,b,c,d;
        cin >> a >> b >> c >> d ;

       if(a>0) cout<<min(a+b+c+d,min(b,c)*2+a*2+1)<<endl;
       else cout<<1<<endl;


    }

    return 0;
}