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

ll fn(vp &v , ll mini , char c){

    ll t= mini;
    ll n = v.size();
    if( c=='x'){


            ll xmin=1e9,xminc=0,xmax=0,xmaxc=0;

            ll ymin=1e9,ymax=0,yminc=0,ymaxc=0;

            for(int i=0; i<n;i++){
                if(v[i].first == mini) continue;
                if(v[i].first < xmin){
                    xmin = v[i].first;
                    xminc =1;
                }
                else if(v[i].first == xmin) xminc ++;
            }
            for(int i=0; i<n;i++){
                if(v[i].first == mini) continue;
                if(v[i].first > xmax){
                    xmax = v[i].first;
                    xmaxc =1;
                }
                else if(v[i].first == xmax) xmaxc ++;
            }
            
            for(int i=0; i<n;i++){
                if(v[i].first == mini) continue;

                if(v[i].second < ymin){
                    ymin = v[i].second;
                    yminc =1;
                }
                else if(v[i].second == ymin) yminc ++;
            }            
            for(int i=0; i<n;i++){
                if(v[i].first == mini) continue;

                if(v[i].second > ymax){
                    ymax = v[i].second;
                    ymaxc =1;
                }
                else if(v[i].second == ymax) ymaxc ++;
            }


            ll mini = (xmax-xmin+1)*(ymax-ymin+1) ;
            if(mini == n-1){
                mini = mini + min(xmax-xmin+1,ymax-ymin+1);
            }
            // cout<<mini<<endl;
            return mini ;
    }

else{


            ll xmin=1e9,xminc=0,xmax=0,xmaxc=0;

            ll ymin=1e9,ymax=0,yminc=0,ymaxc=0;

            for(int i=0; i<n;i++){
                if(v[i].second == mini) continue;

                if(v[i].first < xmin){
                    xmin = v[i].first;
                    xminc =1;
                }
                else if(v[i].first == xmin) xminc ++;
            }
            for(int i=0; i<n;i++){
                if(v[i].second == mini) continue;

                if(v[i].first > xmax){
                    xmax = v[i].first;
                    xmaxc =1;
                }
                else if(v[i].first == xmax) xmaxc ++;
            } 
            for(int i=0; i<n;i++){
                if(v[i].second == mini) continue;

                if(v[i].second < ymin){
                    ymin = v[i].second;
                    yminc =1;
                }
                else if(v[i].second == ymin) yminc ++;
            }            
            for(int i=0; i<n;i++){
                if(v[i].second == mini) continue;

                if(v[i].second > ymax){
                    ymax = v[i].second;
                    ymaxc =1;
                }
                else if(v[i].second == ymax) ymaxc ++;
            }

            ll mini = (xmax-xmin+1)*(ymax-ymin+1) ;
            if(mini == n-1){
                mini = mini + min(xmax-xmin+1,ymax-ymin+1);
            }
            return mini;

}


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {


            ll n;
            cin >> n;

            vp v(n);
            for(auto &[i,j] : v) cin >> i >> j;

            if(n <=1) {cout<<1<<endl;continue;}

            ll xmin=1e9,xminc=0,xmax=0,xmaxc=0;

            ll ymin=1e9,ymax=0,yminc=0,ymaxc=0;

            for(int i=0; i<n;i++){
                if(v[i].first < xmin){
                    xmin = v[i].first;
                    xminc =1;
                }
                else if(v[i].first == xmin) xminc ++;
            }
            for(int i=0; i<n;i++){
                if(v[i].first > xmax){
                    xmax = v[i].first;
                    xmaxc =1;
                }
                else if(v[i].first == xmax) xmaxc ++;
            } 
            for(int i=0; i<n;i++){
                if(v[i].second < ymin){
                    ymin = v[i].second;
                    yminc =1;
                }
                else if(v[i].second == ymin) yminc ++;
            }            
            for(int i=0; i<n;i++){
                if(v[i].second > ymax){
                    ymax = v[i].second;
                    ymaxc =1;
                }
                else if(v[i].second == ymax) ymaxc ++;
            }

            ll mini = (xmax-xmin+1)*(ymax-ymin+1) ;
            // cout<<mini<<endl;

            // cout<<xminc<<yminc<<xmaxc<<ymaxc<<endl;
            // cout<<xmax<<endl;
            if(xminc ==1){
                ll nm = fn(v, xmin , 'x');
                mini = min(mini,nm);
            }
            // cout<<mini<<endl;

            if(yminc ==1){
                ll nm = fn(v, ymin , 'y');
                mini = min(mini,nm);  
            }
            if(xmaxc ==1){
                ll nm = fn(v, xmax , 'x');
                mini = min(mini,nm);
            }
            if(ymaxc ==1){
                ll nm = fn(v, ymax , 'y');
                mini = min(mini,nm);
            }

            cout<<mini<<endl;

            // no of monster < maxi, if maxi then issue




    }
    return 0;
}