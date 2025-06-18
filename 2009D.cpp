#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
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
        //cout<<t<<endl;
        while (t--) {
            //cout<<t;

            ll n;
            cin >> n;
            //cout<<n;
            vector<pair<ll,ll>> vp(n);
            for(int i= 0; i<n ; i++){
                cin >> vp[i].first ;
                cin>> vp[i].second ;
            }

            // for(int i=0; i<n; i++){
            //     cout<<vp[i].first <<" "<<vp[i].second<<endl;
            // }
            vec t1(n+1); vec t0(n+1);

            for(int i=0; i<n; i++){
                if(vp[i].second == 1){
                    t1[vp[i].first]++;
                }
                else{
                    t0[vp[i].first]++;
                }
            }

            int inboth =0;
            for(int i=0; i<n+1; i++){
                if((t1[i] == 1 && t0[i]==1)) inboth++;
            }

            // coutData(t1);
            // coutData(t0);
            ll count =0;

        for(int i=0; i<n-1; i++){
            if(t1[i] >0){
                if(t1[i+2]>0){
                    if(t0[i+1]>0) count++;
                }
            }
        }

        // for(int i=0; i<n; i++){
        //     swap(t1[i],t0[i]);
        // }
        for(int i=0; i<n-1; i++){
            if(t0[i] >0){
                if(t0[i+2]>0){
                    if(t1[i+1]>0) count++;
                }
            }
        }
        //cout<<inboth<<endl;
        count += inboth*(n-2);
        cout<<count<<endl;


        }

    return 0;
}