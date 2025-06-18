#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
                
        ll n;
        cin >> n;
        vector<ll> vec(n);
        string s;
        for(auto &i : vec){
            cin >> i;
        }
        cin >> s;
        vector<ll> posL;vector< ll> posR ;
        for(int i=0;i<s.length(); i++){
            if(s.at(i) == 'L') {posL.push_back(i) ;}
        }
        for(int i=s.length()-1; i>=0 ;i --){
            if(s.at(i) == 'R') { posR.push_back(i) ;}
        }
        vector<ll> sum(n);
        
        for(int i=0;i<n;i++){
            if(i==0) sum[i]= vec[i];
            else{
                sum[i]= sum[i-1]+ vec[i];
            }
        }
    ll len= min(posL.size(), posR.size());
    ll ans= 0;
    for(int i= 0;i <len ;i ++){
        if(posR[i]>posL[i]) {
            if(posL[i] == 0){ ans += (sum[posR[i]]-sum[posL[i]]+sum[0]);}
            else ans+= (sum[posR[i]]-sum[posL[i]-1]) ;
        }
    }
cout<<ans<<endl;






    }

    return 0;
}