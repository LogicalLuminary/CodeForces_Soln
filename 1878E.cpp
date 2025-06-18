#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<ll> vec;
typedef vector<pair<ll,ll>> vp;
typedef vector<vector<ll>> vec2d;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define initVec2d(n, m, val) vector<vec>(n, vec(m, val))
#define debug(...) cerr << "[" << #__VA_ARGS__ << "] = ", debugOut(__VA_ARGS__)
#define newl cout << "\n";
#define f first
#define s second

// Custom input function for both static and dynamic sizing
template <typename T>
void cinData(T& container, int n = -1) {
    if (n != -1) { // Static size input
        if constexpr (is_same_v<T, vector<typename T::value_type>>) {
            for (int i = 0; i < n; ++i) cin >> container[i];
        } 
    }
}

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

// Debug utility for multiple variables
void debugOut() { cerr << endl; }
template <typename Head, typename... Tail>
void debugOut(Head H, Tail... T) {
    cerr << H << ' ';
    debugOut(T...);
}

// gcd and lcm utilities
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

// Overload for map
template <typename Key, typename Value>
void coutData(const map<Key, Value> &m) {
    for (const auto &[key, value] : m) {
        cout << key << ':' << value << ' ';
    }
    cout << '\n';
}

// Overload for general containers
template <typename Container>
void coutData(const Container &container) {
    for (const auto &el : container) {
        cout << el << ' ';
    }
    cout << '\n';
}
template <typename Key, typename Value>
void coutData(const vector<pair<Key, Value>> &v) {
    for (const auto &p : v) {
        cout << p.first << ':' << p.second << ' ';
    }
    cout << '\n';
}

// Overload for nested containers (vector of vectors)
template <typename T>
void coutNested(const vector<vector<T>> &v) {
    for (const auto &row : v) {
        for (const auto &val : row) {
            cout << val << ' ';
        }
        cout << '\n';
    }
}

int rangeAND(const vector<ll>& prefix, int l, int r) {
    return l == 0 ? prefix[r] : prefix[r] & prefix[l - 1];
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {


           ll n;cin >> n;
            vec v(n);
            cinData(v,n);

            ll q;
            cin >> q;
            vector<pair<ll,ll>> vp(q);
            for(auto &[i,j] :vp) cin >> i>> j;

                
    vector<ll> prefix(n);
    prefix[0] = v[0];
    for (int i = 1; i < n; ++i) {
        prefix[i] = prefix[i - 1] & v[i];
    }

    
    coutData(prefix);

        // for(int i=0; i<q; i++){

        //     ll k = vp[i].s;
        //     ll l = vp[i].f -1;

        //     ll st = l;
        //     ll ed = n-1;
        //     ll ans = -1;

        //     while(st<=ed){
        //         ll mid = (st+ed)/2 ;

        //         if(rangeAND(prefix,l,mid) >= k){
        //             ans = mid;
        //             st = mid+1;
        //         }
        //         else{
        //             ed= mid-1;
        //         }

        //     }

        //     cout<<ans<<" ";
        // }
        // newl;



    }
    return 0;
}