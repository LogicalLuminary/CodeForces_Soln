#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
const ll mod = 100000007;
typedef vector<ll> vec;
typedef pair<ll,ll> pll;
typedef vector<pair<ll,ll>> vpll;
typedef vector<vector<ll>> vec2d;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define initVec2d(n, m, val) vector<vec>(n, vec(m, val))
#define fir first
#define sec second

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

// bool check(ll a, ll b, vec& v){
//     ll n= v.size();

//     for(int i=0; i<n; i++){
//         if((i+1)*a+(n-i)*b != v[i]) return false;
//     }
//     return true;
// }

void solve(){

        ll n;cin >> n;
        vec v(n);
        for(auto &i : v) cin >> i;

        ll tot = accumulate(all(v),0LL);

        if((2*tot)%(n*(n+1)) != 0) {cout<<"NO\n";return;}

        ll k = 2*tot/(n*(n+1));
        ll s=0,e=n;
        ll del=v[1]-v[0];
        for(int i=1; i<n; i++){
            if(v[i]-v[i-1] != del){cout<<"NO\n";return;}
        }

        ll a = (k+del)/2;
        ll b = (k-del)/2;
        if((k+del)%2 !=0){cout<<"NO\n";return;}
        if((k-del)%2 !=0){cout<<"NO\n";return;}

        if(a+b == k && a>=0 && b>=0 ) cout<<"YES\n";
        else cout<<"NO\n";


}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}