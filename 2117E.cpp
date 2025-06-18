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

        ll n; cin >> n;
        vec ai(n),bi(n);
        for(auto &i: ai) cin >> i;
        for(auto &i: bi) cin >> i;

        vector<ll> fa(n+1,-1),fb(n+1,-1);

        for(int i=0; i<n; i++){
            fa[ai[i]]=i;
            fb[bi[i]]=i;
        }
        ll maxi =0;
        for(ll i=0; i<n; i++){
            ll tar = bi[i];
            if(fb[tar]!= -1){
                if(fb[tar] >i) maxi = max(maxi,min(fb[tar]+1,i+1));
            }
            if(fa[tar]!=-1){
                if(fa[tar]!= i+1 && fa[tar]!=i-1) maxi= max(maxi,min(fa[tar]+1,i+1));
            }
        }

        
        for(ll i=0; i<n; i++){
            ll tar = ai[i];
            if(fb[tar]!= -1){
                if((fb[tar] !=i+1) && (fb[tar]!= i-1)) maxi = max(maxi,min(fb[tar]+1,i+1));
            }
            if(fa[tar]!=-1){
                if(fa[tar]>i) maxi= max(maxi,min(fa[tar]+1,i+1));
            }
            // cout<<maxi<<endl;
        }
        cout<<maxi<<endl;
        

}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}