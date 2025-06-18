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
            map <ll,int>m1;
            for(int i=0; i<n; i++){
                ll temp;
                cin >>temp;
                m1[temp]++;
            }

    map<ll,int> ::iterator it1 = m1.begin();
    map<ll,int> :: iterator it2 = m1.end();
    it2--;
    ll mex = -1;
 
 // alice will chose the ele , so that which may get exhausted && is unique.
 // 0 , 0,0,1,1,2,2. she goes for 1,2,0 not 0,1,2

// sort the map on basis of val 
// copy map into vec pair.
// 1st ele is value, 2nd key.
//if(tie in 1st ele, alice obv pick smaller key).
//bob will also search for min 1st ele with min 2nd ele n take that. 
//coz if not take that alice will take 1 copy of that ele

// if alice takes -> remove that from arr
// if bob takes do -- only
// need sortd at all steps for both 

vector<pair<ll,ll>> vec;

for(auto it:m1){
    vec.pb({it.second,it.first});
}
sort(all(vec));

bool alice = true;
ll ptr1 = 0;
set<int> s1;
mex  = -1;
//coutData(vec);
// for(auto i : vec){
//     cout<<i.first<<" "<< i.second<<endl;
// }

while(ptr1<vec.size()){

    if(alice){
        if(vec[ptr1].first > 0){
        s1.insert(vec[ptr1].second);

        }
        ptr1++;
        alice = false;
    }
    else{

        vec[ptr1].first--;
        if(vec[ptr1].first == 0){
            mex = vec[ptr1].second ;
            //s1.insert(vec[ptr1].second);
            break;
        }
        //ptr1++;
        alice = true;

    }
    
}


// for(auto it : s1){
//     cout<<it<<" ";
// }newl

vector<ll> v2(vec.size());
vector<ll> v3(s1.size());

for(ll i=0; i<vec.size(); i++){
    v2.at(i) = vec[i].second;
}
sort(all(v2));
ll i=0;
for(auto it: s1){
    v3[i] =it;
    i++;
}
//coutData(v3);
ll ans =-1;
for(int i=0; i<mex; i++){
    if(i == v3.size() ){
        ans = v3[i-1]+1;
        break;
    }
    if(v3[i] != i){
        ans = i;
        break;
    }
}

if(ans == -1){
    ans = mex;
}

if(ans == -1){
    ans = *v2.rbegin() +1 ;
}
cout<<ans<<endl;




        }

    return 0;
}