// #include<bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef long double ld;
// typedef vector<ll> vec;
// typedef vector<vector<ll>> vec2d;
// #define pb push_back
// #define all(x) (x).begin(), (x).end()
// #define rall(x) (x).rbegin(), (x).rend()
// #define vec2d(n, m, val) vector<vec>(n, vec(m, val))
// #define debug(x) cerr << #x << " = " << (x) << "\n";
// #define newl cout << endl;

// // Custom input function for both static and dynamic sizing
// template <typename T>
// void cinData(T& container, int n = -1) {
//     if (n != -1) { // Static size input
//         if constexpr (is_same_v<T, vector<typename T::value_type>>) {
//             for (int i = 0; i < n; ++i) cin >> container[i];
//         } else if constexpr (is_same_v<T, set<typename T::value_type>>) {
//             for (int i = 0; i < n; ++i) {
//                 typename T::value_type x;
//                 cin >> x;
//                 container.insert(x);
//             }
//         } else if constexpr (is_same_v<T, map<typename T::key_type, typename T::mapped_type>>) {
//             for (int i = 0; i < n; ++i) {
//                 typename T::key_type key;
//                 typename T::mapped_type value;
//                 cin >> key >> value;
//                 container[key] = value;
//             }
//         } else if constexpr (is_same_v<T, vector<pair<typename T::value_type::first_type, typename T::value_type::second_type>>>) {
//             container.resize(n);
//             for (int i = 0; i < n; ++i) {
//                 typename T::value_type x;
//                 cin >> x.first >> x.second;
//                 container[i] = x;
//             }
//         } else {
//             cerr << "Unsupported container type\n";
//             exit(1);
//         }
//     } else { // Dynamic size input
//         if constexpr (is_same_v<T, vector<typename T::value_type>>) {
//             typename T::value_type x;
//             while (cin >> x) container.push_back(x);
//         } else if constexpr (is_same_v<T, set<typename T::value_type>>) {
//             typename T::value_type x;
//             while (cin >> x) container.insert(x);
//         } else if constexpr (is_same_v<T, map<typename T::key_type, typename T::mapped_type>>) {
//             typename T::key_type key;
//             typename T::mapped_type value;
//             while (cin >> key >> value) container[key] = value;
//         } else if constexpr (is_same_v<T, vector<pair<typename T::value_type::first_type, typename T::value_type::second_type>>>) {
//             typename T::value_type x;
//             while (cin >> x.first >> x.second) container.push_back(x);
//         } else {
//             cerr << "Unsupported container type\n";
//             exit(1);
//         }
//     }
// }


// // coutData function for containers and pairs

// //pair
// template <typename T1, typename T2>
// void coutData(const pair<T1, T2> &p) {
// cout << p.first << ' ' << p.second << ' ';
// cout << '\n';
// }

// // Overload for map
// template <typename Key, typename Value>
// void coutData(const map<Key, Value> &m) {
//     for (const auto &[key, value] : m) {
//         cout << key << ':' << value << ' ';
//         }
//    cout <<'\n';
//     }
// // Overload for general containers
// template <typename Container>
// void coutData(const Container &container) {
//     for (const auto &el : container) {
//         cout << el <<' ';
//     }
//     cout << '\n';
// }


//     int main() {
//         ios::sync_with_stdio(false);
//         cin.tie(0);

//         int t;
//         cin >> t;
//         while (t--) {

//             ll n;
//             cin >> n;

//             string s;
//             cin>> s;
// ll msum = INT_MAX;
// if(s.length() >=3){
//         for(int i=0; i<s.length()-1; i++){
//             ll num =0;
//             num+= s.at(i+1)-'0';
//             num += 10*(s.at(i)-'0');
//             cout<<num<<" "<<endl;
//             vector<pair<int,char>> vp;

//             for(int j=0; j<s.length();j++){
//                 if(j == i+1) continue;
//                 if( j == i) {
//                     vp.pb({num,'0'});
//                 }
//                 else{
//                     vp.pb({ s.at(j)-'0','0'});
//                 }

//             }


//             cout<<endl;
//             for(int i=0; i<vp.size(); i++){
//                 if(vp[i].first == 0){
//                     vp[i].second = '?';
//                 }
//                 else if(vp[i].first == 1 ){
//                     vp[i].second = '*';
//                 }
//                 else{
//                     vp[i].second  = '+';
//                 }
//             }
            
//             for(int i=0; i<vp.size(); i++){
//                 cout<<vp[i].first<<" "<<vp[i].second<<endl;
//             }

//             ll ans = 0;
//             ll temp = 1;
            
//             for(int i=0; i<vp.size(); i++){
//                 if(i<vp.size()-1 && vp[i].second == '+') ans += vp[i+1].first;
//             }

//             // for(int i=0; i<vp.size(); i++){
//             //     if(vp[i].second =='?'){
//             //         ll min =INT_MAX;
//             //         for(int j=0; j<vp.size(); j++){
//             //             if(vp[j].first < min && j != i) min = vp[i].first ; 
//             //         }
//             //         ans =min;
//             //         break;
//             //     }
//             //     else if(vp[i].second =='+'){
//             //         ans += vp[i].first;
//             //         ans+= temp;
//             //         temp =1;
//             //     }
//             //     else{
//             //         if(t<vp.size())temp *= vp[i+1].first;
//             //     }
//             //}


//     if(ans < msum) msum = ans;
//         }
//     cout<<msum<<endl;

//     }

//     else cout<<s<<endl;


//     }

//     return 0;
// }

// if 0 , all *,except  min(start or end) ;
// els need a loop for what no to club as well as if 1,then what to do
