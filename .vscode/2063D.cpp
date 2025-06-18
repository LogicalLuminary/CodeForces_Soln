// #include<bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef long double ld;
// typedef vector<ll> vec;
// typedef vector<pair<ll,ll>> vp;
// typedef vector<vector<ll>> vec2d;
// #define pb push_back
// #define all(x) (x).begin(), (x).end()
// #define rall(x) (x).rbegin(), (x).rend()
// #define initVec2d(n, m, val) vector<vec>(n, vec(m, val))
// #define debug(...) cerr << "[" << #__VA_ARGS__ << "] = ", debugOut(__VA_ARGS__)
// #define newl cout << endl;
// #define f first
// #define s second

// // Custom input function for both static and dynamic sizing
// template <typename T>
// void cinData(T& container, int n = -1) {
//     if (n != -1) { // Static size input
//         if constexpr (is_same_v<T, vector<typename T::value_type>>) {
//             for (int i = 0; i < n; ++i) cin >> container[i];
//         } 
//     }
// }

// template <typename T>
// T exp(T base, T exp) {
//     T result = 1;
//     while (exp > 0) {
//         if (exp & 1) result *= base;
//         base *= base;
//         exp >>= 1;
//     }
//     return result;
// }

// // Debug utility for multiple variables
// void debugOut() { cerr << endl; }
// template <typename Head, typename... Tail>
// void debugOut(Head H, Tail... T) {
//     cerr << H << ' ';
//     debugOut(T...);
// }

// // gcd and lcm utilities
// ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
// ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

// // Overload for map
// template <typename Key, typename Value>
// void coutData(const map<Key, Value> &m) {
//     for (const auto &[key, value] : m) {
//         cout << key << ':' << value << ' ';
//     }
//     cout << '\n';
// }

// // Overload for general containers
// template <typename Container>
// void coutData(const Container &container) {
//     for (const auto &el : container) {
//         cout << el << ' ';
//     }
//     cout << '\n';
// }
// template <typename Key, typename Value>
// void coutData(const vector<pair<Key, Value>> &v) {
//     for (const auto &p : v) {
//         cout << p.first << ':' << p.second << ' ';
//     }
//     cout << '\n';
// }

// // Overload for nested containers (vector of vectors)
// template <typename T>
// void coutNested(const vector<vector<T>> &v) {
//     for (const auto &row : v) {
//         for (const auto &val : row) {
//             cout << val << ' ';
//         }
//         cout << '\n';
//     }
// }
// struct ReverseSort {
//     bool operator()(const int &a, const int &b) const {
//         return a > b; // Reverse order
//     }
// };

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int t;
//     cin >> t;
//     while (t--) {


//            ll n , m;
//            cin >> n >> m ;
//            vec ai(n);
//            vec bi(m);

//         cinData(ai,n);
//         cinData(bi,m);




//         ll k ;
//     if(m>= 2*n){
//         k = n;
//     }
//     else if( n>= 2*m ){
//         k = m;
//     }
//     else{
//         k = (n+m)/3 ;
//     }

// cout<<k<<endl;

// for(int i=0; i<k; i++){
//     map<ll , ll > ma1;
//     map<ll,ll> mb1;

//     for(int i=0; i<n; i++){
//         ma1[ai[i]]++;
//     }

//     for(int i=0; i<m; i++){
//         ma1[ai[i]]++;
//     }

// map<ll,ll, ReverseSort> rma1;
// map<ll,ll,ReverseSort> rmb1;

//     for(int i=0; i<n; i++){
//         rma1[ai[i]]++;
//     }

//     for(int i=0; i<m; i++){
//         rma1[ai[i]]++;
//     }

// ll sum  = 0;
//     for(int j =0 ; j <i ; j++){
//         auto m1 = *ma1.begin();
//         auto m2 =*rma1.begin();

//         ll s1 = m1.first - m2.first ;
//         auto mp1 = *mb1.begin();
//         auto mp2 =*rmb1.begin();
 
//         ll s2 =mp1.first - mp1.first;

//         if(s2>s1) {
//             ma1.erase(m1.first ); 
//             ma1.erase(m2.first ); 

//             rma1.erase(m1.first );
//             rma1.erase(m2.first );
//             sum += s2;

//         }
//         else{
        
//            mb1.erase(mp1.first ); 
//             mb1.erase(mp2.first ); 

//             rmb1.erase(mp1.first );
//             rmb1.erase(mp2.first );
//             sum += s1;
//         }
//     }
// cout<<sum<<" ";

// }
// newl;

//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vec;
#define all(x) (x).begin(), (x).end()

// Custom comparator for reverse sorting
struct ReverseSort {
    bool operator()(const ll &a, const ll &b) const {
        return a > b;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;
        vec ai(n), bi(m);

        for (ll &x : ai) cin >> x;
        for (ll &x : bi) cin >> x;

        // Calculate maximum triangles possible
        ll k = min({n, m, (n + m) / 3});
        cout << k << endl;

        // Create frequency maps
for(int j=0; j<k; j++){
        map<ll, ll> ma1, mb1;
        map<ll, ll, ReverseSort> rma1, rmb1;

        for (ll x : ai) ma1[x]++, rma1[x]++;
        for (ll x : bi) mb1[x]++, rmb1[x]++;

        ll sum = 0;
        for (int i = 0; i < k; i++) {
            // Pick max from reverse map
            auto m1 = *rma1.begin();
            auto m2 = *rmb1.begin();

            // Update sum and erase used elements
            sum += m1.first + m2.first;
            rma1.erase(m1.first);
            rmb1.erase(m2.first);
            ma1[m1.first]--, mb1[m2.first]--;
            if (ma1[m1.first] == 0) ma1.erase(m1.first);
            if (mb1[m2.first] == 0) mb1.erase(m2.first);
        }

        cout << sum << " ";
    }
}
    return 0;
}
