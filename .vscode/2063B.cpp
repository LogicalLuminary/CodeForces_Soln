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

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int t;
//     cin >> t;
//     while (t--) {


//            ll n , l ,r ;
//            cin >> n>> l >> r ;

//            vec v(n);
//            cinData(v,n) ;
//            //cout<< n << l << r;
// //coutData(v);
//            vec lft ; vec rng ; vec rgt ;

//            for(int i=0; i<l-1 ; i++){
//                 lft.pb(v[i]);
//            }
//            for(int i=l-1; i<r; i++){
//             rng.pb(v[i]);
//            }
//            for(int i = r ; i<n; i++){
//                 rgt.pb(v[i]);
//            }


// sort(all(rgt)); sort(all(lft)); sort(rall(rng));


// //coutData(lft);
// while (lft.size() < r - l + 1) {
//     lft.pb(-1);
// }
// // Ensure rgt size matches r-l+1
// while (rgt.size() < r - l + 1) {
//     rgt.pb(-1);
// }
// // coutData(v);
// // coutData(lft);
// // coutData(rng);
// // coutData(rgt);




//  ll sum = accumulate(all(rng) ,0);
//  ll og = sum;
//  vec sumlft(r-l+1),sumrng(r-l+1),sumrgt(r-l+1);

// for(int i=0; i< max(r-l+1.0,lft.size()*1.0); i++){
//     if(i == 0) sumlft[0] = lft[0];
//     else sumlft[i] = sumlft[i-1]+lft[i] ;
// }
// for(int i=0; i< r-l+1; i++){
//     if(i == 0) sumrng[0] = rng[0];
//     else sumrng[i] = sumrng[i-1]+rng[i] ;
// }
// for(int i=0; i< max(r-l+1.0,rgt.size()*1.0); i++){
//     if(i == 0) sumrgt[0] = rgt[0];
//     else sumrgt[i] = sumrgt[i-1]+rgt[i] ;
// }

// // coutData(sumlft);
// // coutData(sumrng);
// // coutData(sumrgt);

//     for(int i=0; i<r-l+1 ; i++){

//        if(rgt[i] >= 0){ 

//         ll temp = og -sumrng[i] + sumrgt[i];
//         if(sum > temp) sum = temp;}

//        if(lft[i] >=0){
//         ll t2 = og - sumrng[i] + sumlft[i];
//         if(sum >t2 ) sum =t2;
//        }
       
//     }

//     cout<<sum<<endl;


//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vec;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        ll n, l, r;
        cin >> n >> l >> r;

        vec v(n);
        for (int i = 0; i < n; ++i) cin >> v[i];

        vec lft, rng, rgt;

        for (int i = 0; i < l - 1; ++i) lft.pb(v[i]);
        for (int i = l - 1; i < r; ++i) rng.pb(v[i]);
        for (int i = r; i < n; ++i) rgt.pb(v[i]);

        sort(all(lft));
        sort(all(rgt));
        sort(rall(rng));

        while (lft.size() < rng.size()) lft.pb(-1);
        while (rgt.size() < rng.size()) rgt.pb(-1);

        vec sumlft(lft.size(), 0), sumrng(rng.size(), 0), sumrgt(rgt.size(), 0);

        for (size_t i = 0; i < lft.size(); ++i) {
            sumlft[i] = (i == 0 ? lft[i] : sumlft[i - 1] + lft[i]);
        }
        for (size_t i = 0; i < rng.size(); ++i) {
            sumrng[i] = (i == 0 ? rng[i] : sumrng[i - 1] + rng[i]);
        }
        for (size_t i = 0; i < rgt.size(); ++i) {
            sumrgt[i] = (i == 0 ? rgt[i] : sumrgt[i - 1] + rgt[i]);
        }

        ll sum = accumulate(all(rng), 0LL);  // Original sum 
        ll og = sum;

        for (size_t i = 0; i < rng.size(); ++i) {
            if (i < rgt.size() && rgt[i] >= 0) {
                ll temp = og - sumrng[i] + sumrgt[i];
                sum = min(sum, temp);
            }
            if (i < lft.size() && lft[i] >= 0) {
                ll temp = og - sumrng[i] + sumlft[i];
                sum = min(sum, temp);
            }
        }

        cout << sum << endl;
    }
    return 0;
}
