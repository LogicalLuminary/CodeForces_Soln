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

void Z_fn(string s, vec& z){
    ll l=0,r=0;ll n=z.size();
    for(int i=1; i<n; ++i){
        if(i >r){
            l=i;r=i;
            // manual computing
            while(r<n && s[r-l]==s[r]) r++;
            r--;
            z[i] = r-l+1;
        }
        else{
            if(z[i-l] < r-i+1) z[i] = z[i-l];
            else{
                l=i;
                while(r<n && s[r-l]==s[r]) r++;
                r--;
                z[i] = r-l+1;
            }
        }
    }

}


int count_ge(const std::multiset<ll>& ms, ll x) {
    // Find the first element not less than x
    auto it = ms.lower_bound(x);
    // Return the count of elements >= x
    return std::distance(it, ms.end());
}

bool allSame(string &s){
    for(int i=0;i<s.length();i++){
        if(s[i] != s[0]) return false;
    }
    return true;
}


void solve() {
    string s;
    cin >> s;
    ll n = s.length();
    vec Z(n);

    Z_fn(s, Z);

    // Quick check for all-same string
    if (Z[1] == n - 1 && n > 3) {
        cout << s.substr(0, n - 2) << endl;
        return;
    }

    vec freq(n + 1, 0);

    // Count frequencies of Z-values
    for (int i = 1; i < n; ++i) {
        freq[Z[i]]++;
    }

    // Accumulate counts for easier range queries
    for (int i = n - 1; i > 0; --i) {
        freq[i] += freq[i + 1];
    }

    ll ans = 0;

    for (int i = 1; i < n; ++i) {
        // If Z[i] ends at the string end and appears at least twice
        if (i + Z[i] == n && freq[Z[i]] > 1) {// hre freq means tot freq of ele >=Z[i]
            ans = max(ans, Z[i]);
        }
    }

    if (ans == 0) {
        cout << "Just a legend" << endl;
    } else {
        cout << s.substr(0, ans) << endl;
    }
}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}