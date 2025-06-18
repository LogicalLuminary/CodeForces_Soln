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
#define newl cout << endl;
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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {


           // 1 3 4  2
           // age iske right me koi blue nhi hai then if 3 blue 4 cant take

            // 1 3 4 5 2
           //if(k+1 th max) ele lie bw other k max ele done
           // else take max of edges,k+1th bw them

           // 2 3 1 3 ?? for k==1 ?
           // saperately deal for k==1 ?? 
           // if eq ele , which will u take max

            ll n,k;
            cin >> n >> k;
            vec v(n);
            cinData(v,n);
            if(k==1){
                ll maxi =0; 
                for(int i=0; i<n; i++){
                    ll sum = v[i];
                    if(i == 0) sum += v[n-1];
                    else if(i == n-1) sum +=v[0]; 
                    else sum += max(v[0],v[n-1]);
                    maxi = max(sum,maxi);
                }
                cout<<maxi<<endl;
                continue;
            };

            ll maxi = 0;
                    vec v2(v.rbegin() , v.rend());
                    sort(v2.rbegin(),v2.rend());
                    ll sum=0;
                    for(int i=0;i<k+1;i++) sum += v2[i];

            cout<<sum<<endl;




    }
    return 0;
}