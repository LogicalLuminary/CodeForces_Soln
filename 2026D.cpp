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

ll find(ll n, ll val){
    ll i=1;
    while(i*(i+1)/2 < val){
        i++;
    } // root n, can be done in log n
    return n+1-i;
}

ll findr(ll n, ll l2 ,ll r){
    ll k = l2-1;
    ll done = n*k - k*(k+1)/2;
    return r-done;
}

void solve(){

        ll n;cin >> n;
        vec v(n);
        for(auto &i:v) cin >> i;
        ll q;cin >> q;
        vpll vp(q);
        for(auto &[i,j]  :vp) cin >> i >> j;

        vec prefix(n+1);
        prefix[1]=v[0];

        
        
        for(int i=1;i <n; i++) prefix[i+1] = prefix[i]+v[i]; 
        ll tot2= accumulate(all(prefix),0LL);


        ll tot =n*(n+1)/2;
        vec g(n+1);
        g[1] = tot2;
        for(int i=1;i<n;i++){
            g[i+1]= g[i]- (n+1-i)*v[i-1];
        }

        vec h (n+1);
        h[1]=g[1];
        for(int i=1;i<n;i++){
            h[i+1] = h[i]+g[i+1];
        }
        
        for(auto [l,r] : vp){
            ll val = tot-l+1;
            ll l2 = find(n,val);
            ll r2= findr(n,l2,l);

            ll val2 = tot-r+1;
            ll l3= find(n,val2);
            ll r3 = findr(n,l3,r);

            ll ans = h[l3-1]-h[l2-1];
            ans +=  prefix[r3] -prefix[l3]+v[l3-1];   ; // l3 to r3
            if(l3>l2) ans += tot - prefix[r2]+v[r2-1];
            else ans += prefix[r3]-prefix[r2]+v[r2-1];
            // ll ans = prefix[r2]-prefix[l2]+v[l2];
            cout<<ans<<endl;
            cout<<l2<<" "<<r2<<endl;
            cout<<l3<<" "<<r3<<endl;
        }


}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}