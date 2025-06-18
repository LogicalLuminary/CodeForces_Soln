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
        for(ll i=0;i<n; i++){
            cin >> vec[i];
        }

    //sort(vec.begin(),  vec.end()) ;

vector<pair<ll,ll>> sum(n);

sum[0].first =vec[0];
sum[0].second =vec[n-1]; 
for(ll i=0; i<n; i++){
    if(i==0) continue;
    sum[i].first = sum[i-1].first + vec[i];
}
for(int i=0; i<n; i++){
    if(i ==0 ) continue ;
    sum[i].second = sum[i-1].second + vec[n-1-i];
}


//cout<<"e";
    // for(auto & i: sum){
    //     cout<< i.first <<" "<<i.second <<endl;
    // }

    ll maxiB=0;
    for(ll i =0;i< n; i++){
        if(n%(i+1) ==0){
            ll maxi=sum[i].first;
            ll mini = sum[i].first;
            for(ll j =i;j+i+1<n;j+=(i+1)){
                maxi= max(sum[j+i+1].first-sum[j].first, maxi);
                mini= min(sum[j+i+1].first-sum[j].first,mini);
            }


           // cout<<maxi<<" "<<mini<< endl;
            maxiB= max(maxi-mini, maxiB);
        }

    }

    cout<<maxiB<<endl ;



    }

    return 0;
}