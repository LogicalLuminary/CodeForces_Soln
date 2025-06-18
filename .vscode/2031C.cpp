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

pair<bool,ll> issqofint(ll n){
    ll i =2;
    for(ll i=2; i<sqrt(n)+1 ; i++){
        if(n % (i*i) == 0 && n != i*i ) return {true,i*i};
    }
    return {false,0};
}


    int main() {
        ios::sync_with_stdio(false);
        cin.tie(0);

        int t;
        cin >> t;
        while (t--) {


            ll n;
            cin>> n;

            if(n%2 == 0){
                for(ll i=2; i<=n+1; i++){
                    cout<<i/2<<" ";
                }
            }
            // else if(issqofint(n).first){
            //     // ll i = issqofint(n).second;
            //     // //cout<<i;
            //     // for(ll k=1; k<=n/(i); k++){
            //     //     for(ll j=1; j<=i; j++){
            //     //         cout<<j<<" ";
            //     //     }
            //     // }
            // }
            else if(n>= 27){
                vec v1(27);
                v1[0]=v1[9]= v1[25]=1;
                v1[1]=v1[2]=2;
                v1[3]=v1[4]=3;
                v1[5]=v1[6]=4;
                v1[7]=v1[8]=5;
                v1[10]=v1[11]=6;
                v1[12]=v1[13]=7;
                v1[14]=v1[15]=8;
                v1[16]=v1[17]=9;
                v1[18]=v1[19]=10;
                v1[20]=v1[21]=11;
                v1[22]=12;
                v1[23]=v1[24]=13;
                v1[26]=12;
                coutData(v1);
                for(int i=28;i<n-27+28; i++){
                    cout<<i/2<<" ";
                }
            }
            else {
                cout<<-1;
            }
        newl;






        }

    return 0;
}