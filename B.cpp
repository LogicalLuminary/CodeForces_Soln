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


            string str;
            cin >> str;

            stack <char> s;
            ll i =0;
            ll n = str.length();
ll emp =0;
            while(i <n){


                if(s.empty()){
                    s.push(str[i]);
                    emp++;
                }

                else{


                    if(s.top()=='(' && str[i]==')') s.pop();

                    else{
                        s.push(str[i]);
                    }
                }
i++;
      }


if(emp >1) cout<<"YES\n";
else cout<<"NO\n";



    }
    return 0;
}