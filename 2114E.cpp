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

void dfs(vec2d &adj, ll s , vec& node,vec& vist ,vec& mini,vec& maxi , ll pmin , ll pmax){
    vist[s]=1;
    mini[s] = min(0LL,node[s]-pmax);
    maxi[s]=max(node[s]-pmin,node[s]);

    for(auto i:adj[s]){
        if(!vist[i])dfs(adj,i,node,vist,mini,maxi,mini[s],maxi[s]);
    }
}

void solve(){

        ll n; cin >> n;
        vec node(n+1);
        for(int i=1;i<n+1;i++) cin >> node[i];
        vpll edge(n-1);
        for(auto &[i,j] : edge) cin >> i>> j;
        
        vec maxi(n+1),mini(n+1);
        vec2d adj = initVec2d(n+1,0,0);
        for(auto [i,j] : edge){
            adj[i].pb(j);
            adj[j].pb(i);
        }

        vec vist(n+1);
        dfs(adj,1,node,vist,mini,maxi,0,0);
        // for(auto i:mini) cout<<i<<" ";cout<<endl;
        // for(int i=1;i<n+1;i++)cout<<maxi[i]<<" ";cout<<endl; 
        for(int i=1;i<n+1;i++) cout<<maxi[i]<<" ";cout<<endl;





}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
