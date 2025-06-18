#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
                
        ll n,a,b,c;
        cin >> n >> a >> b >> c ;
        ll trip = floor(n/(a+b+c));

        ll left = n-(a+b+c)*trip;
        ll days=3*trip;
        if(left == 0){}
        else if(a>= left ) days++;
        else if(a+b>= left)days+=2;
        else days+= 3 ;

cout<<days<<endl;




    }

    return 0;
}