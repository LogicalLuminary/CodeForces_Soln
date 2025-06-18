#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
const ll mod = 1000000007;
typedef vector<ll> vec;
typedef vector<pair<ll,ll>> vp;
typedef vector<vector<ll>> vec2d;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define initVec2d(n, m, val) vector<vec>(n, vec(m, val))
#define debug(...) cerr << "[" << #__VA_ARGS__ << "] = ", debugOut(__VA_ARGS__)

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



int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
ll c=0;
    int t;
    cin >> t;
    while (t--) {

        c++;
        
        ll n,m ;
        cin >> n >> m ;
        if(c == 452) {cout<<n<<m;}

            if(m==0) {cout<<n<<endl;continue;}
            
            ll l = max(0LL,n-m);
            ll r = n+m;

            ll ors = n;
            for(ll i=1; i <=r; i*=2){
                if(r-l >= i || (l&i) || r&i) {
                    ors = ors|i;
                    // cout<<i<<endl;
                }
            }
            cout<<ors<<endl;


    }
    return 0;
}




//
// #include <bits/stdc++.h>
// #define pb emplace_back
// #define fst first
// #define scd second
// #define mkp make_pair
// #define mems(a, x) memset((a), (x), sizeof(a))

// using namespace std;
// typedef long long ll;
// typedef double db;
// typedef unsigned long long ull;
// typedef long double ldb;
// typedef pair<ll,ll> pii;

// void solve() {
// 	ll n, m;

// 	scanf("%lld%lld", &n, &m);
//     // cin >> n >> m;
// 	ll l = max(0LL, n - m), r = n + m, ans = n;
// 	for (int i = 31; ~i; --i) {
// 		if ((l & (1LL << i)) || (r & (1LL << i)) || (l >> (i + 1)) != (r >> (i + 1))) {
// 			ans |= (1LL << i);
// 		}
// 	}
// 	printf("%lld\n", ans);
// }

// int main() {
// 	int T = 1;
// 	scanf("%d", &T);
// 	while (T--) {
// 		solve();
// 	}
// 	return 0;
// }