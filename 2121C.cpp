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

        ll n,m;cin >> n >> m ;

        vec2d v = initVec2d(n,m,0);
        for(auto &i:v){
            for(auto &j:i) cin >> j;
        }

        vector<pair<ll,pair<ll,ll>>> arr;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++) arr.pb({v[i][j],{i,j}});
        }

        sort(all(arr));
        reverse(all(arr));

        vec row(n);
        vec col(m);

        if(n==1 || m==1){
            cout<<arr[0].fir-1<<endl;return;
        }

        // for 1*1 fail 
        ll ans = arr[0].fir-1;
        ll r = arr[0].sec.fir;
        ll c = arr[1].sec.sec;
        ll ans1 = -1;
        for(int i=2;i<n*m;i++){
            if(arr[i].sec.fir == r || arr[i].sec.sec == c){}
            else{
                ans1 =max(ans1,arr[i].fir);
                break;
            }
        }
         r = arr[1].sec.fir;
         c = arr[0].sec.sec;
        ll ans2 = -1;
        for(int i=2;i<n*m;i++){
            if(arr[i].sec.fir == r || arr[i].sec.sec == c){}
            else{
                ans2 =max(ans2,arr[i].fir);
                break;
            }
        }

        ans = max(ans,min(ans1,ans2));

        // for(auto i:arr) cout<<i.fir<<" "<<i.sec.fir<<" "<<i.sec.sec<<endl;
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