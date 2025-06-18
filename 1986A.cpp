#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
                
        int a,b,c;
        cin >> a >> b >> c ;

    int mid = min({a,b,c});
    int maxi =INT_MAX;

for(int i= mid; i<= max({a,b,c}); i++){
    if(abs(a-i)+abs(b-i)+abs(c-i) < maxi) maxi = abs(a-i)+abs(b-i)+abs(c-i);
}
cout<<maxi<<endl;


    }

    return 0;
}