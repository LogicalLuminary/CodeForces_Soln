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

    int t;
    cin >> t;
    while (t--) {

            ll n;
            cin >> n;
            vec v(n);
            for(auto &i : v)cin >> i;

            ll maxi = v.back();
            vec mp(maxi+1);;
            for(int i=0; i<n; i++){
                mp[v[i]]++;
            }

            ll c=0;
            for(int i=1; i<= maxi ; i++){
                if(mp[i] != 0  && mp[i-1] == 0) {c++;}
                else if(mp[i] !=0 && mp[i-1]!=0){
                    mp[i]=0;
                }
            }

            cout<<c<<endl;


    }
    return 0;
}