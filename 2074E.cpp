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

    ll t=1;
    ll cnt=0;
    ll n;
    cin >>n;
    std::srand(std::time(0));

    ll a=rand()%n+1,b,c;
    b=rand()%n+1;
    c=rand()%n+1;
// more the randomisation more chance of clearing


    if(a==b){
        b=a+1;
        b%=n;
        b++;
    }
    if(c==b){
        c=b+1;
        c%=n;
        c++;
    }
    if(c==a){
        c=a+1;
        c%=n;
        c++;
    }
    
    while(1){
            
            cout<<"?"<<" "<<a<<" "<<b<<" "<<c<<endl;
            cout.flush();
            cin >>t;
            if(!t){
                cout<<'!'<<" "<<a<<" "<<b<<" "<<c<<endl;
                break;
            }
            else{
                cnt =rand()%100;
                if(cnt%3==0) c=t;
                else if(cnt%3==1) b=t;
                else a=t;
            }

          
        }
        
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}