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
bool pos(int mini , ll k , ll n ,vec &v){
    int count=0;
    int i=0;
    while(count < k && i<n){
        unordered_set<int> s;
        bool flag =false;
        while(s.size() != mini+1 && i<n){
            if(v[i]<=mini){
                s.insert(v[i]);
            }
            i++;
            if(s.size() == mini+1)flag=true;
        }
        if(flag)count++;
    }
    if(count == k)return true;
    return false;
}
 
void solve(){

        
 
           ll n,k;
           cin >>n>>k;
 
            vec v(n);
            for(auto &i:v) cin>> i;
 
            unordered_map<int,int> mp;
            for(int i=0; i<n; i++){
                mp[v[i]]++;
            }
            int mini = INT_MAX;
            for(auto it:mp){
                if(it.second < k){
                    mini = it.first;break;
                }
            }
 
            //mex will be <= mini
 
            ll s=0;
            ll e = mini;
            ll ans=-1;
            while(s<=e){
                ll mid = (s+e)/2;
                if(pos(mid,k,n,v)){
                    ans = mid;
                    s=mid+1;
                }
                else{
                    e= mid-1;
                }
            }
 
            cout<<ans+1<<endl;
 


}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}