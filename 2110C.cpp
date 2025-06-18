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


            ll n;cin >> n;
            vec v(n);
            for(auto &i :v) cin >> i;

            vector<pair<ll,ll>> vp(n);

            for(auto &[i,j] :vp) cin >> i >> j;

            vec choice(n);
            ll c=0;
            for(int i=0; i<n; i++){
                if(v[i]== -1) c++;
                choice[i]= c;
            }

            vec ones(n);
            c=0;
            for(int i=0; i<n; i++){
                if(v[i] ==1) c++;
                ones[i] = c;
            }

            vector<pair<ll,ll>> rel(n);

            for(int i=0; i<n; i++){
                rel[i].first = vp[i].first-ones[i];
                rel[i].second = vp[i].second - ones[i];
            }

            vector<pair<ll,ll>> mM(n); // min max 

            for(int i=0; i<n; i++){
                mM[i].first = max(0LL,-1*rel[i].first) ;
                mM[i].second = rel[i].second;
            }
            bool pos =true;
            ll ch=0;
            ll levl =0;
            // store levl at each idx, 
            // age kisi idx pe level badhna means pichle -1 pe hi hus hoga , so cal it 
            vec curh(v);
            ll maxUsable=n;

            for(int i=0; i<n; i++){

                if(v[i] == -1) {
                    ch++;
                }

                if(mM[i].first > levl){
                    if(ch >= mM[i].first-levl){
                        ch = mM[i].first-levl;
                        levl = mM[i].first;
                    }
                    else{
                        pos = false;
                        break;
                    }
                }
                else if(mM[i].second < levl){
                    pos= false; break;
                }
                curh[i] = levl ;

            }


            if(!pos) cout<<-1<<endl;
            else coutData(v);





    }
    return 0;
}


