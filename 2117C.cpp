// #include<bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef long double ld;
// const ll mod = 100000007;
// typedef vector<ll> vec;
// typedef pair<ll,ll> pll;
// typedef vector<pair<ll,ll>> vpll;
// typedef vector<vector<ll>> vec2d;
// #define pb push_back
// #define all(x) (x).begin(), (x).end()
// #define rall(x) (x).rbegin(), (x).rend()
// #define initVec2d(n, m, val) vector<vec>(n, vec(m, val))
// #define fir first
// #define sec second

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

// // gcd and lcm utilities
// ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
// ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

// template <typename Container>
// void coutData(const Container &container) {
//     for (const auto &el : container) {
//         cout << el << ' ';
//     }
//     cout << '\n';
// }

// void solve(){

//         ll n;cin >> n ;
//         vec v(n);
//         for(auto &i: v) cin >> i;

//         unordered_map<ll,set<ll>> mp;
//         for(int i=0; i<n; i++){
//             mp[v[i]].insert(i);
//         }

//         ll group=0;
       


// while(1){

//     ll mini = 1e9;
//     vector<ll> keysToErase;  //

//     for (auto &[i, j] : mp) {
//         if (!j.empty()) {
//             mini = min(mini, *j.rbegin()); 
//             j.erase(--j.end());     
//         }

//         if (j.empty()) {
//             keysToErase.push_back(i);
//         }
//     }

//     for (int key : keysToErase) {
//         mp.erase(key);
//     }
//             group++;
//             cout<<mini<<endl;
//             if(mini==0) break;

// }

//         cout<<group<<endl;



// }


// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     int t;
//     cin >> t;
//     while (t--) solve();
//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n, ans = 0;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    set<int> cur, seen;
    for(int i=0; i<n; i++){
        cur.insert(a[i]);
        seen.insert(a[i]);
        if(cur.size() == seen.size()){
            ans++;
            seen.clear();
        }
    }
    cout << ans << '\n';
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
}