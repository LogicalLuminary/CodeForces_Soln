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
// #define s second

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

// Debug utility for multiple variables
void debugOut() { cerr << endl; }
template <typename Head, typename... Tail>
void debugOut(Head H, Tail... T) {
    cerr << H << ' ';
    debugOut(T...);
}

// gcd and lcm utilities
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

// Overload for map
template <typename Key, typename Value>
void coutData(const map<Key, Value> &m) {
    for (const auto &[key, value] : m) {
        cout << key << ':' << value << ' ';
    }
    cout << '\n';
}

// Overload for general containers
template <typename Container>
void coutData(const Container &container) {
    for (const auto &el : container) {
        cout << el << ' ';
    }
    cout << '\n';
}
template <typename Key, typename Value>
void coutData(const vector<pair<Key, Value>> &v) {
    for (const auto &p : v) {
        cout << p.first << ':' << p.second << ' ';
    }
    cout << '\n';
}

// Overload for nested containers (vector of vectors)
template <typename T>
void coutNested(const vector<vector<T>> &v) {
    for (const auto &row : v) {
        for (const auto &val : row) {
            cout << val << ' ';
        }
        cout << '\n';
    }
}


string getxor( string &s1 , string &s2){
    
    if(s1.length() > s2.length()){
        while(s1.length() != s2.length()) s2.insert(s2.begin(),'0');
    }
    if(s2.length() > s1.length()){
        while(s1.length() != s2.length()) s1.insert(s1.begin(),'0');
    }

    string s3;
    for(int i=0;i<s1.length();i++){
        s3.push_back(( (s1[i]-'0') ^ (s2[i]-'0')) +'0');
    }
    return s3;
};

bool all1(string &s){
    int z=0;
    for(auto i: s){
        if(i =='0') z++; 
    }
    return z ==0 ? true : false;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {


           string s;
           cin >> s;
        ll n = s.length();
        ll l1=1;
        ll r1=s.length();

        if(all1(s)){
            cout<<l1<<" "<<r1<<" "<<1<<" "<<1<<endl;
            continue;
        }

        ll f0=0;
        for(int i=0; i<n; i++) {if(s.at(i) =='0') {f0=i;break;}}
        ll maxi =0;
        string mstr=s;
        ll l2=0;
        ll ls2 = n-f0;
        for( int i=0; i<=f0; i++){
            string s2 (s.begin()+i,s.begin()+i+ls2);
            // cout<<s2<<endl;
            if(getxor(s,s2) > mstr){
                mstr = getxor(s,s2);
                l2= i;
            }
        }

        cout<<l1<<" "<<r1<<" "<<l2+1<<" "<<l2+ls2<<endl;





    }
    return 0;
}