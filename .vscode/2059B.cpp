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


           ll n;
           cin >> n;
           ll k ;
           cin >> k ;
           vp v(n);
           for(int i=0; i<n; i++){
            cin >> v[i].f;
           }
           newl;

           int todo = k;
           int done = 1;
           ll sum =0;
           vec b;
// in vp store starting col
        int i=0;
        int endb = 0;
        while(i < n){

            if(done %2 == 1 ){

                v[i].s = 1;
                int j=endb;
                while(v[i].f == j+1 && todo < n-i){
                    i++;
                    j++;
                }

                i++;
                todo --;
                done ++ ;



            }

        else{
            
            v[i].s =1;
            // if(v[i].f == endb+1) {b.pb(endb+1);          
            // endb++;

            // };
            bool temp =false;
while(i<n && todo < n-i){
            if(temp && v[i].f == endb+1) {b.pb(endb+1);          
            endb++;
            i++;
            }

            else{
                if(v[i].f != endb+1 && i<n && todo < n-i ) {
                    b.pb(v[i].f);
                    i++;
                }
                else break;
            }
}
            
            done ++;
            todo --;


        }

        }
    
for(auto it : v){
    cout<< it.f<<" ";
}
newl;
for(auto it : v){
    cout<< it.s<<" ";
}
newl;
coutData(b);
    }
    return 0;
}