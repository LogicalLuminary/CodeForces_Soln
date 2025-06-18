#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vec;
typedef vector<vector<ll>> vec2d;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define vec2d(n, m, val) vector<vec>(n, vec(m, val))
#define debug(x) cerr << #x << " = " << (x) << "\n";
#define newl cout << endl;

// Custom input function for both static and dynamic sizing
template <typename T>
void cinData(T& container, int n = -1) {
    if (n != -1) { // Static size input
        if constexpr (is_same_v<T, vector<typename T::value_type>>) {
            for (int i = 0; i < n; ++i) cin >> container[i];
        } else if constexpr (is_same_v<T, set<typename T::value_type>>) {
            for (int i = 0; i < n; ++i) {
                typename T::value_type x;
                cin >> x;
                container.insert(x);
            }
        } else if constexpr (is_same_v<T, map<typename T::key_type, typename T::mapped_type>>) {
            for (int i = 0; i < n; ++i) {
                typename T::key_type key;
                typename T::mapped_type value;
                cin >> key >> value;
                container[key] = value;
            }
        } else if constexpr (is_same_v<T, vector<pair<typename T::value_type::first_type, typename T::value_type::second_type>>>) {
            container.resize(n);
            for (int i = 0; i < n; ++i) {
                typename T::value_type x;
                cin >> x.first >> x.second;
                container[i] = x;
            }
        } else {
            cerr << "Unsupported container type\n";
            exit(1);
        }
    } else { // Dynamic size input
        if constexpr (is_same_v<T, vector<typename T::value_type>>) {
            typename T::value_type x;
            while (cin >> x) container.push_back(x);
        } else if constexpr (is_same_v<T, set<typename T::value_type>>) {
            typename T::value_type x;
            while (cin >> x) container.insert(x);
        } else if constexpr (is_same_v<T, map<typename T::key_type, typename T::mapped_type>>) {
            typename T::key_type key;
            typename T::mapped_type value;
            while (cin >> key >> value) container[key] = value;
        } else if constexpr (is_same_v<T, vector<pair<typename T::value_type::first_type, typename T::value_type::second_type>>>) {
            typename T::value_type x;
            while (cin >> x.first >> x.second) container.push_back(x);
        } else {
            cerr << "Unsupported container type\n";
            exit(1);
        }
    }
}


// coutData function for containers and pairs

//pair
template <typename T1, typename T2>
void coutData(const pair<T1, T2> &p) {
cout << p.first << ' ' << p.second << ' ';
cout << '\n';
}

// Overload for map
template <typename Key, typename Value>
void coutData(const map<Key, Value> &m) {
    for (const auto &[key, value] : m) {
        cout << key << ':' << value << ' ';
        }
   cout <<'\n';
    }
// Overload for general containers
template <typename Container>
void coutData(const Container &container) {
    for (const auto &el : container) {
        cout << el <<' ';
    }
    cout << '\n';
}


    int main() {
        ios::sync_with_stdio(false);
        cin.tie(0);

        int t;
        cin >> t;
        while (t--) {


            ll n , m , k;
            cin >> n >> m >> k ;

            ll w;
            cin >> w;
            vec heights(w);
            for(int i=0; i<w; i++){
                cin >> heights[i];
            }

            vec2d v = vec2d(n,m,0);

            for(int i=0; i<m ; i++){
                v[0][i] = min({min(i+1.0,m-i*1.0),k*1.0,m-k+1.0});
                v[n-1][i] = min({min(i+1.0,m-i*1.0),k*1.0,m-k+1.0});
            }
            for(int j=0; j<n; j++){
                v[j][0] = min({min(j+1.0,n-j*1.0),k*1.0,n-k+1.0});
                v[j][m-1] = min({min(j+1.0,n-j*1.0), k*1.0,n-k+1.0});
            }
        map<ll,ll> m1;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                v[i][j] = v[0][j]*v[i][0];
                //cout<<v[i][j]<<"    ";
                m1[v[i][j]]++;
            }
           // newl;
        }

    vector<pair<ll, ll>> vec;

    // Iterate through the map and insert each pair into the vector
    for (auto& entry : m1) {
        vec.push_back(entry); 
    }

    sort(rall(heights));
    sort(rall(vec));
    // for(auto i : vec){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    vector<ll> sumarr(w);
    for(ll i=0; i<w; i++){
        if(i==0) sumarr[0] = heights[0];
        else{
            sumarr[i] = sumarr[i-1] + heights[i] ; 
        }
    }
//coutData(heights);
//newl;
ll ans = 0;ll idx =0;
    for(ll i= 0; i<w ; i++){
        //cout<<ans<<" ";
        if(vec[idx].second >0){
        //cout<<ans<<" ";
        ans += heights[i]*vec[idx].first;
        vec[idx].second --;
        } 
        else{//cout<<"r";
            idx++;
           // cout<<heights[i] ;
           // cout<<vec[idx].first;
            ans += heights[i]*vec[idx].first;
            vec[idx].second --;
        }
        //cout<<ans<<" ";

    }
cout<<ans<<endl;










        }

    return 0;
}