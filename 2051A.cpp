#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
                
        ll n;
        cin>> n;
        vector<ll> arrm(n), arrs(n);

        for(int i=0; i<n; i++){
            cin >> arrm[i];
        }
        for(int i=0; i<n; i++){
            cin >> arrs[i];
        }

    ll sum=0;

    for(int i=0; i<n; i++){
        if(i == n-1){
            sum+= arrm[i];
            continue;
        }
        if(arrm.at(i) > arrs.at(i+1)){
            sum -= arrs[i+1]- arrm[i] ;
        }
    }

    cout<<sum<<endl;





    }

    return 0;
}