#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


typedef long long ll;
typedef vector<ll> vec;
typedef vector<vector<ll>> vec2d;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define vec2d(n, m, val) vector<vec>(n, vec(m, val))
#define debug(x) cerr << #x << " = " << (x) << "\n";
#define newl cout << endl;


ll maxSubarraySum(vector<ll> &arr) {
       
    
    ll sum=0; ll max= INT_MIN;
    for(int i=0; i<arr.size(); i++){
        sum += arr[i];
        if(sum > max) max = sum ;
        if(sum < 0) sum =0;
    }


    return max;

}


    int main() {
        ios::sync_with_stdio(false);
        cin.tie(0);

        ll n;
        cin >> n;
        vec v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        cout<<maxSubarraySum(v)<<endl;

    return 0;
}