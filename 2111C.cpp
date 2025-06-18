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

        ll n;cin>>n;
        vec v(n);
        vec co(n+1);

        for(auto &i: v) cin >>i;
        ll c=0;
        for(int i=0; i<n; i++){
            if(i==0){c++;co[v[i]]=1;continue;}
            
            if(v[i] == v[i-1]) {c++;co[v[i]] = max(co[v[i]],c);}
            else{
                c=1;
                co[v[i]]=max(co[v[i]],1LL);
            }
        }// calc max cont occ
        ll mini =1e12;
        for(int i=1;i<n+1;++i){
            if(co[i]==0) continue;
            ll price = (n-co[i])*(i);
            mini = min(price,mini);
        }
        cout<<mini<<endl;

}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}