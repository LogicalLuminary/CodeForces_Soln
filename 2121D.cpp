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
void bubble(vec& v, int op , ll &steps, vpll & ans){

    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v.size() - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
                steps++;
                ans.pb({op,j+1});
            }
        }
    }
}

void solve(){

        ll n;cin >> n;
        vec ai(n),bi(n);
        for(auto &i:ai) cin >> i;
        for(auto &i:bi) cin >> i;

        ll steps=0;
        vpll vp;
        bubble(ai,1,steps,vp);
        bubble(bi,2,steps,vp);
        for(int i=0;i<n;i++){
            if(ai[i]>bi[i]){
                swap(ai[i],bi[i]);
                steps++;
                vp.pb({3,i+1});
            }
        }
        bubble(ai,1,steps,vp);
        bubble(bi,2,steps,vp);

        cout<<steps<<endl;
        for(auto &[i,j]:vp) cout<<i<<" "<<j<<endl;


}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}