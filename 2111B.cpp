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

        ll n,m;
        cin >>n>>m;
        vector<pair<pair<ll,ll>,pair<ll,ll>>> vpp(m);
        for(int i=0; i<m; i++){
            cin>>vpp[i].fir.fir>>vpp[i].fir.sec>>vpp[i].sec.fir;
        }
        string s="";
        vec fib(100);
        fib[1]=1,fib[2]=2;
        for(int i=3;i<11;i++) fib[i]=fib[i-1]+fib[i-2];

        for(int i=0; i<m; i++){
            vec v(3);
            v[0]=vpp[i].fir.fir;
            v[1]=vpp[i].fir.sec;
            v[2]=vpp[i].sec.fir;
            sort(all(v));
            if(v[0] >= fib[n] && v[2]>= fib[n-1]+fib[n]) s.pb('1');
            else s.pb('0');
        }

        cout<<s<<endl;


}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}