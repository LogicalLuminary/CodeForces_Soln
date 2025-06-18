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

void solve(){

        ll n,k;
        cin >> n >> k;
        for(int i=0;i<n;i++){
            if(i<k)cout<<'1';
            else cout<<'0';
        }
        cout<<endl;


}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}