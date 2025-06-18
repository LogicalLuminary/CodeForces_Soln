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


            ll n;
            cin>> n;
            map<ll,ll> m1;
            for(int i=0; i<n; i++){
                ll temp;
                cin >> temp;
                m1[temp]++;
            }

        vec v;vector<pair<ll,ll>> v2;
        for(auto &it: m1){
            if(it.second >= 2) {
                v2.pb({it.first,it.second});
                it.second /=2; 
                while(it.second>0){
                v.pb(it.first);
                it.second--;
                }
            }
        }
        //coutData(v);

        if(v.size()<4){
            cout<<"NO\n";
            continue;
        }

    ll s  = v2.size();
    //coutData(v2);
    vector<pair<ll,ll>> points(4);
    if(v2.size() >= 4){

        cout<<"YES\n";
        points[0].first = v2[0].first;
        points[0].second = v2[1].first;
        points[1].first = v2[s-2].first;
        points[1].second = v2[1].first;
        points[2].first = v2[s-2].first;
        points[2].second = v2[s-1].first;
        points[3].first = v2[0].first;
        points[3].second = v2[s-1].first;

    if(v2[0].second >=3 && v2[s-1].second >= 3){
        points[0].first = v2[0].first;
        points[0].second = v2[0].first;
        points[1].first = v2[0].first;
        points[1].second = v2[s-1].first;
        points[2].first = v2[s-1].first;
        points[2].second = v2[0].first;
        points[3].first = v2[s-1].first;
        points[3].second = v2[s-1].first;
    }

        for(int i=0; i<4; i++){
            cout<<points[i].first<<" "<<points[i].second<<" ";
        }
        

    }
    else{
        cout<<"YES\n";
        ll s = v.size();
        points[0].first = v[0];
        points[0].second = v[1];
        points[1].first = v[s-2];
        points[1].second = v[1];
        points[2].first = v[s-2];
        points[2].second = v[s-1];
        points[3].first = v[0];
        points[3].second = v[s-1];
        for(int i=0; i<4; i++){
            cout<<points[i].first<<" "<<points[i].second<<" ";
        }

        newl;
    }










        }

    return 0;
}