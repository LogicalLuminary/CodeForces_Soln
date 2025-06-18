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

bool Check(vec&v, ll k){
    ll def =0;// no. of default
    ll i=0;
    ll n = v.size();
    while(i<n){
        if(i+1 >=n) {def++;i++;}
        else if(v[i+1]-v[i] <= k) i+=2;
        else {
            def ++;
            i++;
        }
        if(def>=2) return false;
    }
    return true;
}

void solve(){

        ll n;cin >> n;
        vec v(n);
        for(auto &i:v) cin >> i;

        ll s= 0; ll e = 1e18;
        ll ans =-1;
        if(n==1) {cout<<1<<endl;return;}
        while(s<=e){
            ll mid = (s+e)/2;
            if(Check(v,mid)){ 
                ans =mid;
                e= mid-1;
            }
            else s= mid+1;
        }
        cout<<ans<<endl;

}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}