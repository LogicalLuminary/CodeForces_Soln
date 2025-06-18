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

bool isPerfectSquare(ll y) {
    ll sq = sqrt(y);
    return sq * sq == y;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {

        string s;
        cin >> s;

        ll y = 1000*(s[0]-'0')+100*(s[1]-'0')+10*(s[2]-'0')+(s[3]-'0');

        ll sq = sqrt(y);
        if(s=="0000") cout<<0<<" "<<0<<endl;

        else if (isPerfectSquare(y)) {
            ll sq = sqrt(y);
            cout << sq - 1 << " " << 1 << endl;
        } else {
            cout << -1 << endl;
        }



    }
    return 0;
}