#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<ll> vec;
typedef vector<pair<ll,ll>> vp;
typedef vector<vector<ll>> vec2d;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define initVec2d(n, m, val) vector<vec>(n, vec(m, val))
#define debug(...) cerr << "[" << #__VA_ARGS__ << "] = ", debugOut(__VA_ARGS__)
#define newl cout << endl;
#define f first
#define s second

// Custom input function for both static and dynamic sizing
template <typename T>
void cinData(T& container, int n = -1) {
    if (n != -1) { // Static size input
        if constexpr (is_same_v<T, vector<typename T::value_type>>) {
            for (int i = 0; i < n; ++i) cin >> container[i];
        } 
    }
}

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


// Overload for general containers
template <typename Container>
void coutData(const Container &container) {
    for (const auto &el : container) {
        cout << el << ' ';
    }
    cout << '\n';
}


bool allEqLeft(vec v, int idx){
    if(idx == 0) return false;
    ll val = v[0];
    for(int i=0; i<idx; i++){
        if(v[i] != val ) return false;
    }
    return true;
}

bool allEqRight(vec v, int idx){
    if(idx == v.size()-1) return false;
    bool all = true;
    ll val = v[idx+1];
    for(int i= idx+1; i<v.size(); i++){
        if(v[i] != val) return false;
    }
    return true;
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
           cinData(v,n);
            vec ans(n);
           vec sumarr(n);
           sumarr[0]=v[0];
           for(int i=0; i<n-1;i++) sumarr[i+1]= sumarr[i]+v[i+1];
            // coutData(sumarr);
           vec sumarr2(n);
           sumarr2[0]=v[n-1];
           for(int i=0; i<n-1; i++)sumarr2[i+1] = sumarr2[i]+v[n-2-i];
            // coutData(sumarr2);
            if(n ==1){cout<<-1<<endl; continue;}
            if(allEqRight(v,0) && v[1]==v[0] ){
                for(auto i:v){ cout<<-1<<" ";}cout<<endl;continue;
            }

           for(ll i=0; i<n; i++){
            // if(sumarr[n-1]-sumarr[i] < v[i] && sumarr2[n-1]-sumarr2[n-1-i]<v[i]) ans[i]=-1;

                auto it= upper_bound(all(sumarr),sumarr[i]+v[i])-sumarr.begin();
                auto it2 = upper_bound(all(sumarr2),sumarr2[n-1-i]+v[i])-sumarr2.begin();
                // cout<<n-1-it2<<endl;
                if(it == n) it = 1e9; 
                if(it2 == n) it2=1e9;

                // Make this O1 . 
                if(allEqLeft(v,i) && v[i-1] < v[i]) it2 =1e9;
                if(allEqRight(v,i) && v[i+1]<v[i]) it= 1e9;
                ans[i] = min(abs(i-it),abs(n-1-i-it2));
                if(ans[i] > n) ans[i] =-1;
           }

           coutData(ans);





    }
    return 0;
}

// WRONG ANS