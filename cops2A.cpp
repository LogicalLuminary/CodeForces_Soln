#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
                
        ll a,b;
        cin >> a >> b;
        int ans;

        if(a<b){
            if(a%2 == b%2){ans =2;}
            else {ans =1;}
        }
        else if(a>b){
            if(a%2 == b%2){ans =1;}
            else{ans =2;}
        }
        else ans =0;
cout<<ans<<endl;




    }

    return 0;
}