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

void solve(){

        ll n,m;
        cin >> n >> m ;

        vec v(m);
        for(auto &i: v) cin >> i;

        sort(all(v));

        ll l=0,r=m-1;

        for(int i=0; i<n;i++){
            if(i%2==0){
                vec t(2);
                t[0]=v[l];t[1]=v[r];
                for(int k=0; k<6; ++k) {
                    if(k%2==0) cout<<t[0]<<" ";
                    else cout<<t[1]<<" ";
                }
            }
            else{
                vec t(2);
                t[0]=v[r];t[1]=v[l];
                for(int k=0; k<6; ++k) {
                    if(k%2==0) cout<<t[0]<<" ";
                    else cout<<t[1]<<" ";
                }
                l++;r--;
            }
            cout<<endl;
        }




}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}