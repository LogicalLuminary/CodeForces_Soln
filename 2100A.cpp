#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
const ll mod = 1000000007;
typedef vector<ll> vec;
typedef vector<pair<ll,ll>> vp;
typedef vector<vector<ll>> vec2d;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define initVec2d(n, m, val) vector<vec>(n, vec(m, val))
#define debug(...) cerr << "[" << #__VA_ARGS__ << "] = ", debugOut(__VA_ARGS__)

template <typename T>
T exp(T base, T exp) {
    T result = 1;
    while (exp > 0) {
        if (exp & 1) result *= base;
        base *= base;
        exp >>= 1;
    }
    return result;
}

// gcd and lcm utilities
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

template <typename Container>
void coutData(const Container &container) {
    for (const auto &el : container) {
        cout << el << ' ';
    }
    cout << '\n';
}

ll case1 ( vec &v){
    // both odd;
ll n =v.size();
    // int i =0;
    ll fodd =-1;ll lodd =-1;// last odd
    for(int i=0; i<n; i++){
        if(v[i]%2 == 1){fodd =i; break;}
    }
    for(int i=0; i<n; i++){
        if(v[i]%2 == 1) lodd = i;
    }

    if(fodd ==-1 || lodd == -1) return 1e9;

    auto lb = lower_bound(all(v),v[fodd]);
    auto ub = upper_bound(all(v),v[lodd]);
    // cout<<endl;
    // cout<<*ub<<" "<<*lb;/
    // cout<<-distance(ub,lb);
    return n+distance(ub,lb);


}


ll case2 ( vec &v){
    // both even
ll n =v.size();
    // int i =0;
    ll fodd =-1;ll lodd =-1;// last odd
    for(int i=0; i<n; i++){
        if(v[i]%2 == 0){fodd =i; break;}
    }
    for(int i=0; i<n; i++){
        if(v[i]%2 == 0) lodd = i;
    }

    if(fodd ==-1 || lodd == -1) return 1e9;
    auto lb = lower_bound(all(v),v[fodd]);
    auto ub = upper_bound(all(v),v[lodd]);

    return n+distance(ub,lb);

}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {


            ll n;
            cin >> n;

        vec v(n);
        for(auto &i:v) cin >> i;
        sort(all(v));

        // coutData(v);

        ll ans = min({case1(v),case2(v),n-1});
        cout<<ans<<endl;




    }
    return 0;
}