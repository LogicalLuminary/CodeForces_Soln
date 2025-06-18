#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

ll nC2(ll n){
    return n*(n-1)/2;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        
        ll n,k;
        cin >> n >> k ;
ll num1=0;
        for(int i=1;i<=n;i++){
            if(nC2(i)+nC2(n-i) == k) num1= i;
        }
        if(num1== 0){ cout<<"NO\n";continue;}
        cout<<"YES\n";
        for(int i=0;i<num1;i++){
            cout<<1<<" ";

        }
        for(int i= num1;i<n;i++){
            cout<<-1<<" ";
        }cout<<endl;
        


    }

    return 0;
}