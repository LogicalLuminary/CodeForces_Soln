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
            cin >> n;
            string s;
            cin >> s;

            vec sumarr(n);
            for(int i=0; i<n; i++){
                if(i==0) sumarr[i]=(s.at(i)-'0');
                else{sumarr[i]= sumarr[i-1]+s.at(i)-'0';}
            }
      //  coutData(sumarr);
            vector<pair<ll,ll>> happy;
            for(int i=0; i<=n; i++){
                if(i == 0) {
                    happy.pb({0,sumarr[n-1]});
                    continue;
                }
                
                pair<ll,ll> hpi = {i-sumarr[i-1],sumarr[n-1]-sumarr[i-1]};
                happy.pb(hpi);
            }


// for(int i=0; i<happy.size(); i++){
//     cout<<happy[i].first<<" "<<happy[i].second<<endl;
// }
        ll ans=INT_MAX;
        ll idx=-1;
        for(int i=0; i<n ; i++){
            //cout<<abs(n/2-i)<<" ";
            if(happy[i].first >= ceil((i)/2.0) && happy[i].second >= ceil((n-i)/2.0)){
                //cout<<abs(n/2-i)<<" ";
                if(abs(n/2.0 - i) < ans) {ans = abs(n/2 - i);idx =i;}
            }
        }
        if(idx == -1){
            cout<<n<<endl;
        }
        else cout<<idx<<endl;



        }

    return 0;
}