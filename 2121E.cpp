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

ll rec(string &l, string &r , ll i, ll match,string ans){
    if(i == l.size()) return 0;

    if(match == 2){
        if(r[i] > l[i]+1){
            ans[i] = l[i]+1;
            match = 0;
        }
        else if(r[i] == l[i]){
            ans[i] = l[i];
        }
        else {
            // ri = li+1
            ans[i]= l[i];
            ll v1 =rec(l,r,i+1,1,ans);
            ans[i]=r[i];
            ll v2 = rec(l,r,i+1,1,ans);
            return max(v1,v2);
        }
        return rec(l,r,i+1,match,ans);
    }
    else if(match ==1){
        
        ll maxi =0;
        for(int i=0;i<=9;i++){
            if( i >= l[i]-'0' && i <= r[i]-'0') {
                ans[i] = '0'+i;
                if(r[i]-'0' > i+1) match =0;
                // else if(r[i]-'0'== i) {}
                maxi = max(maxi,rec(l,r,i+1,match,ans));
            }
        }


    }
    else{
        if(r[i] > l[i]+1){
            ans[i] = l[i]+1;
        }
        else if(r[i] == l[i]){
            if(l[i] ='9') ans[i]='7';
            else ans[i]=l[i]+1;
        }
        else {
            // ri = li+1
            if(r[i] =='9' || r[i]=='8') ans[i]='7';
            else ans[i] = r[i]+1;
        }
        return rec(l,r,i+1,match,ans);
    }
}

void solve(){

        string l,r;
        cin >> l >> r;

        ll match =2;
        string ans=l;
        cout<<rec(l,r,0,match,ans)<<endl;


}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}