#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
                
        ll n,x,y;
        cin >> n >> x >> y ;

        vector<ll> vec(n);
        ll sum=0;
        for(ll i=0; i<n; i++){
            cin >> vec[i];
            sum += vec[i];
        }
ll count =0;

sort(vec.begin(), vec.end());

for(int i=0;i<n;i++){

    ll c = sum-y-vec[i], b = sum-x-vec[i]; 

    auto lower = lower_bound(vec.begin()+i+1, vec.end(), c);

    // Find the first element > b (upper bound)
    auto upper = upper_bound(vec.begin()+i+1, vec.end(), b);

    // The number of elements in the range [c, b]
     count += (upper - lower);
     //cout<<count<<endl;


}




cout<<count<<endl;



    }

    return 0;
}