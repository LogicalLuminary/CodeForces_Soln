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
#define sec seccond

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

void update(vec& v){
    ll midx =-1, smidx=-1;
    ll mini=1e10;
    for(int i=0; i<3;i++){
        if(v[i] < mini) {
            mini =v[i];
            midx=i;
        }
    }
    mini=1e10;
    for(int i=0;i<3;i++){
        if(v[i]<mini && i!= midx){
            mini=v[i];
            smidx=i;
        }
    }
    ll sm = v[smidx];
    v[midx] = 2*sm+1;
    
}

void solve(){

        ll n;
        cin >> n;
        vec v(3);
ll c=0;
        while(min({v[0],v[1],v[2]}) < n){
            update(v);
            c++;
        }
cout<<c<<endl;


}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}