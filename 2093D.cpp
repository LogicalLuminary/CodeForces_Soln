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

pair<ll,ll> rec1( ll n, ll val , ll i, ll j){
    // base 
    if(val ==1) return {i,j};
    if(val == 2) return {i+1,j+1};
    if(val == 3) return {i+1,j};
    if(val == 4) return {i,j+1};
    if(val <= 0 ) return {-1,-1};

    ld p = n*n/4 ;
    ll x = ceil(val/p) ; 
        if( x==1) return rec1(n/2 , val-0, i, j);
        else if(x == 2) return rec1(n/2,val-p,i+n/2,j+n/2);
        else if(x == 3) return rec1(n/2,val - 2*p, i+n/2 , j);
        else {
            return rec1(n/2,val-3*p,i,j+n/2);
        }

}

ll rec2 (ll n,ll i ,ll j){

    // base
    if(n == 1) return 1;


        if(i<=n/2 && j <= n/2 ){return rec2(n/2,i,j);}
        else if(i<=n/2 && j>n/2) return rec2(n/2, i,j-n/2) + n*n*3/4;
        else if(i>n/2 && j<= n/2) return rec2(n/2,i-n/2,j) +n*n*2/4;
        else return rec2(n/2,i-n/2,j-n/2) + n*n/4;

}

int main() {

    // auto p = rec1(4,0,1,1);
    // cout<<p.f<<" "<<p.s;
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {


           ll n,q;
           cin>>n>>q;

            vector<pair<string,pair<ll,ll>>> vs(q);
            for (auto &i:vs) {cin>>i.f;
                if(i.f == "->") cin>>i.s.f>>i.s.s;
                else {cin >> i.s.f;i.s.s = -1; }   
            }

        for(int i=0;i<q; i++){
            if(vs[i].s.s == -1){
                auto p = rec1(pow(2,n),vs[i].s.f , 1,1);
                cout<<p.f <<" "<<p.s<<endl;
            }
            else{
                cout<<rec2(pow(2,n),vs[i].s.f,vs[i].s.s)<<endl;
            }
        }






    }
    return 0;
}