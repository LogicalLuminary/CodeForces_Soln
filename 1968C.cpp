#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
                
        ll n;
        cin >> n;

        vector<ll> inp1(n-1);
        for(int i=0; i<n-1; i++){
            cin >> inp1[i];
        }
        vector<ll> ans(n);

        for(int i=0; i<n; i++){
            if(i==0) ans[0]=inp1.at(0)+1 ;
            else{
                ans[i]= ans[i-1]+inp1[i-1] ;
            }

            if( (i < n-1 )&&ans[i]<= inp1[i]){
            ans[i] += ((inp1[i]-ans[i]+1)*ans[i-1]  );
            }

        }
        for(auto &i : ans){
            cout<< i<<" ";
        }
        cout<<endl;

    }

    return 0;
}