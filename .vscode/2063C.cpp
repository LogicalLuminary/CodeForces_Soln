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

ll sum =0;

void solve (vec v ,ll i ,ll n){
            

        vec v2;
        for(int i=0; i<n-1; i++){
                v2.pb(v[i+1]-v[i]);
        }
       // coutData(v2);
        
           ll s = accumulate(all(v2),0);
    if(n<=1 ){
      sum += abs(s);
        return;
    };


//if(s<0) sum += -s;
//if(s>0) sum += s;
n=n-1;

        solve(v2,i,n);
        reverse(all(v2));
        solve(v2,i,n);;
        //reverse(all(v2));

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
           cinData(v,n);

           ll s = accumulate(all(v),0);
sum =s;
        //    while(n!=1){

        //     vec v2;
        //     for(int i=0; i<n-1; i++){
        //         v2.pb(v[i+1]-v[i]);
        //     }
        //     coutData(v2);
        //    ll s = accumulate(all(v2),0);
        //    cout<<s;
        //    newl;
        //    newl;

        //     n--;
        //    }

solve(v,0,n);

cout<<sum<<endl;



    }
    return 0;
}