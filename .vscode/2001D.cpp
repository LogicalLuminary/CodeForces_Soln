// #include<bits/stdc++.h>
// using namespace std;

// typedef long long ll;
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
//             cin >> n ;

//             vec v(n);
//             cinData(v,n);
//             ll maxlen = -1;
//         for(int i=0; i<n; i++){
// //cout<<"i";
//             map<ll,ll> m1;
//             for(int j=i; j<n; j++){
//                 m1[v[j]]++;
//                 if(m1[v[j]] > 1) {
//                     m1[v[j]]--;
//                     continue ;
//                 }
//             }
//             //cout<<m1.size()<<" ";
//             ll size = m1.size();
//             if(size > maxlen) maxlen = size;
            
//         }

// cout<<maxlen<<endl;

//             vec v2(maxlen);
//             vec temp(maxlen);
        
//     for(int i=0; i<n; i++){
// //cout<<"i";
//             map<pair<ll,ll> ,ll> m1;
//             map<ll,ll> m2;
//             for(int j=i; j<n; j++){
//                 m1[{j,v[j]}]++;
//                 m2[v[j]]++;
//                 if(m2[v[j]] > 1) {
//                     m1[{j,v[j]}]--;
//                     m2[v[j]]--;
//                     continue ;
//                 }
//             }// it is treating repeting ele as diff coz diff idx is there
//     for (auto it = m1.begin(); it != m1.end(); ) {
//         if (it->second == 0) {
//             it = m1.erase(it); // Erase and move to the next element
//         } else {
//             ++it; // Move to the next element
//         }
//     }

//         ll no =0;
//         ll size = m1.size();
//         //cout<<size;
//         if(size == maxlen){
            
//             if(no == 0){
//                 ll k=0;
//                 for(auto it: m1){
//                    v2[k] = ( it.first.second); 
//                    k++;
//                 }
//                 no++;
//                 //coutData(v2);
//             }
//             else{
//                 ll k=0;
//                 for(auto it:m1){
//                     temp[k] = (it.first.second);
//                     k++;
//                 }
//                 //coutData(temp);

        //         bool tochange = true;
        //         for(int i=0; i<maxlen; i++){
        //             if(i%2 == 0){
        //                 if(v2[i]> temp[i]) {
        //                     tochange=false;
        //                     break;
        //                     }
        //                 else if(temp[i]>v2[i]){
        //                     tochange = true;
        //                     break;
        //                 }
        //             }
        //             else{
        //                 if(v2[i]<temp[i]){
        //                     tochange = false;
        //                     break;
        //                 }
        //                 else if(v2[i]>temp[i]){
        //                     tochange= true;
        //                     break;
        //                 }
        //             }
        //         }

        //         if(tochange){
        //             for(int i=0; i<maxlen; i++){
        //                 v2[i] = temp[i];
        //             }
        //         }
        //     }
        // }
            
//     }

// coutData(v2);








//         }

//     return 0;
// }

// use the vector logic not map for no of occurences ;