// // #include<bits/stdc++.h>
// // using namespace std;

// // typedef long long ll;
// // typedef long double ld;
// // typedef vector<ll> vec;
// // typedef vector<vector<ll>> vec2d;
// // #define pb push_back
// // #define all(x) (x).begin(), (x).end()
// // #define rall(x) (x).rbegin(), (x).rend()
// // #define vec2d(n, m, val) vector<vec>(n, vec(m, val))
// // #define debug(x) cerr << #x << " = " << (x) << "\n";
// // #define newl cout << endl;

// // // Custom input function for both static and dynamic sizing
// // // template <typename T>
// // // void cinData(T& container, int n = -1) {
// // //     if (n != -1) { // Static size input
// // //         if constexpr (is_same_v<T, vector<typename T::value_type>>) {
// // //             for (int i = 0; i < n; ++i) cin >> container[i];
// // //         } else if constexpr (is_same_v<T, set<typename T::value_type>>) {
// // //             for (int i = 0; i < n; ++i) {
// // //                 typename T::value_type x;
// // //                 cin >> x;
// // //                 container.insert(x);
// // //             }
// // //         } else if constexpr (is_same_v<T, map<typename T::key_type, typename T::mapped_type>>) {
// // //             for (int i = 0; i < n; ++i) {
// // //                 typename T::key_type key;
// // //                 typename T::mapped_type value;
// // //                 cin >> key >> value;
// // //                 container[key] = value;
// // //             }
// // //         } else if constexpr (is_same_v<T, vector<pair<typename T::value_type::first_type, typename T::value_type::second_type>>>) {
// // //             container.resize(n);
// // //             for (int i = 0; i < n; ++i) {
// // //                 typename T::value_type x;
// // //                 cin >> x.first >> x.second;
// // //                 container[i] = x;
// // //             }
// // //         } else {
// // //             cerr << "Unsupported container type\n";
// // //             exit(1);
// // //         }
// // //     } else { // Dynamic size input
// // //         if constexpr (is_same_v<T, vector<typename T::value_type>>) {
// // //             typename T::value_type x;
// // //             while (cin >> x) container.push_back(x);
// // //         } else if constexpr (is_same_v<T, set<typename T::value_type>>) {
// // //             typename T::value_type x;
// // //             while (cin >> x) container.insert(x);
// // //         } else if constexpr (is_same_v<T, map<typename T::key_type, typename T::mapped_type>>) {
// // //             typename T::key_type key;
// // //             typename T::mapped_type value;
// // //             while (cin >> key >> value) container[key] = value;
// // //         } else if constexpr (is_same_v<T, vector<pair<typename T::value_type::first_type, typename T::value_type::second_type>>>) {
// // //             typename T::value_type x;
// // //             while (cin >> x.first >> x.second) container.push_back(x);
// // //         } else {
// // //             cerr << "Unsupported container type\n";
// // //             exit(1);
// // //         }
// // //     }
// // // }


// // // // coutData function for containers and pairs

// // // //pair
// // // template <typename T1, typename T2>
// // // void coutData(const pair<T1, T2> &p) {
// // // cout << p.first << ' ' << p.second << ' ';
// // // cout << '\n';
// // // }

// // // // Overload for map
// // // template <typename Key, typename Value>
// // // void coutData(const map<Key, Value> &m) {
// // //     for (const auto &[key, value] : m) {
// // //         cout << key << ':' << value << ' ';
// // //         }
// // //    cout <<'\n';
// // //     }
// // // // Overload for general containers
// // // template <typename Container>
// // // void coutData(const Container &container) {
// // //     for (const auto &el : container) {
// // //         cout << el <<' ';
// // //     }
// // //     cout << '\n';
// // // }


// //     int main() {
// //         ios::sync_with_stdio(false);
// //         cin.tie(0);

  


// //             ll n;
// //             cin >> n;
// //             vec v1(n);

// //             for(int i=0; i<n; i++){
// //                 cin >> v1[i];
// //             }
// //             ll m;
// //             cin >> m;
// //             vec v2(m);
// //             for(int i=0; i<m; i++){
// //                 cin >> v2[i];
// //             }

// //     vector< pair<ll,pair<ll,ll>>> vp;

// //     int i = 0, j = 0;

// //     while (i < v1.size() && j < v2.size()) {
// //         if (v1[i] == v2[j]) {
// //             vp.push_back({v1[i],{i,j}});
// //             i++;
// //             j++;
// //         } else if (v1[i] < v2[j]) {
// //             i++;
// //         } else {
// //             j++;
// //         }
// //     }

// //     vp.pb({0,{n-1,m-1}});// for after the last intersection

// // // for(auto it: vp){
// // //     cout<<it.first<<" "<<it.second.first<<" "<<it.second.second<<endl;
// // // }
// // // newl;


// //     vec sumv1(n+1), sumv2(m+1) ;
// //     for(int i=0; i<n; i++){
// //         if(i == 0) sumv1[0] = v1[0];
// //         else{
// //             sumv1[i]= sumv1[i-1]+v1[i];
// //         }
// //     }
// //     for(int i=0; i<m; i++){
// //         if(i == 0) sumv2[0] = v2[0];
// //         else{
// //             sumv2[i]= sumv2[i-1]+v2[i];
// //         }
// //     }

// // // for(auto it: sumv1){
// // //     cout<<it<< " "; 
// // // }newl;
// // // for(auto it: sumv2){
// // //     cout<<it<<" ";
// // // }newl;


// //        ll s = vp.size();
// //        vector<pair<ll,ll>> sumbw(s);
// //        for(int i=0; i<s; i++){
// //            if(i == 0){
// //                sumbw[i].first = sumv1[vp[i].second.first];
// //                sumbw[i].second = sumv2[vp[i].second.second];
// //            }
// //            else{
// //                sumbw[i].first = sumv1[vp[i].second.first]-sumv1[vp[i-1].second.first];
// //                sumbw[i].second = sumv2[vp[i].second.second]-sumv2[vp[i-1].second.second];
// //            }

// //       }
    
// // // for(auto it: sumbw){
// // //     cout<<it.first<<" "<<it.second<<endl;
// // // }

// //     ll ans =0;
// //     for(int i=0; i<s; i++){
// //         if(sumbw[i].first>sumbw[i].second) ans += sumbw[i].first ;
// //         else ans += sumbw[i].second;
// //     }

// // cout<<ans<<endl;








    

// //     return 0;
// // }
// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef vector<ll> vec;

// #define pb push_back

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     ll n;
//     cin >> n;
//     vec v1(n);
//     for (int i = 0; i < n; i++) {
//         cin >> v1[i];
//     }

//     ll m;
//     cin >> m;
//     vec v2(m);
//     for (int i = 0; i < m; i++) {
//         cin >> v2[i];
//     }

//     vector<pair<ll, pair<ll, ll>>> vp;
//     int i = 0, j = 0;

//     // Find common elements with indices
//     while (i < v1.size() && j < v2.size()) {
//         if (v1[i] == v2[j]) {
//             vp.push_back({v1[i], {i, j}});
//             i++;
//             j++;
//         } else if (v1[i] < v2[j]) {
//             i++;
//         } else {
//             j++;
//         }
//     }

//     // Add segment after the last intersection
//     vp.pb({0, {n, m}}); // `n` and `m` are beyond the last valid indices

//     // Prefix sums for v1 and v2
//     vec sumv1(n + 1, 0), sumv2(m + 1, 0);
//     for (int i = 1; i <= n; i++) {
//         sumv1[i] = sumv1[i - 1] + v1[i - 1];
//     }
//     for (int i = 1; i <= m; i++) {
//         sumv2[i] = sumv2[i - 1] + v2[i - 1];
//     }

//     ll ans = 0;
//     ll prev_v1_idx = 0, prev_v2_idx = 0;

//     // Calculate maximum sums between intersections
//     for (auto &intersection : vp) {
//         ll cur_v1_idx = intersection.second.first;
//         ll cur_v2_idx = intersection.second.second;

//         ll sum1 = sumv1[cur_v1_idx] - sumv1[prev_v1_idx];
//         ll sum2 = sumv2[cur_v2_idx] - sumv2[prev_v2_idx];

//         ans += max(sum1, sum2);

//         prev_v1_idx = cur_v1_idx;
//         prev_v2_idx = cur_v2_idx;
//     }

//     cout << ans << endl;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vec;

#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n;
    cin >> n;
    vec v1(n);
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }

    ll m;
    cin >> m;
    vec v2(m);
    for (int i = 0; i < m; i++) {
        cin >> v2[i];
    }

    vector<pair<ll, pair<ll, ll>>> vp;
    int i = 0, j = 0;

    // Find common elements with indices
    while (i < v1.size() && j < v2.size()) {
        if (v1[i] == v2[j]) {
            vp.pb({v1[i], {i, j}});
            i++;
            j++;
        } else if (v1[i] < v2[j]) {
            i++;
        } else {
            j++;
        }
    }

    // Add a segment for the remaining elements safely
    vp.pb({0, {n, m}});

    // Prefix sums for v1 and v2
    vec sumv1(n + 1, 0), sumv2(m + 1, 0);
    for (int i = 1; i <= n; i++) {
        sumv1[i] = sumv1[i - 1] + v1[i - 1];
    }
    for (int i = 1; i <= m; i++) {
        sumv2[i] = sumv2[i - 1] + v2[i - 1];
    }

    ll ans = 0;
    ll prev_v1_idx = 0, prev_v2_idx = 0;

    // Calculate maximum sums between intersections
    for (const auto &intersection : vp) {
        ll cur_v1_idx = intersection.second.first;
        ll cur_v2_idx = intersection.second.second;

        if (cur_v1_idx <= n && cur_v2_idx <= m) {  // Ensure indices are valid
            ll sum1 = sumv1[cur_v1_idx] - sumv1[prev_v1_idx];
            ll sum2 = sumv2[cur_v2_idx] - sumv2[prev_v2_idx];

            ans += max(sum1, sum2);

            prev_v1_idx = cur_v1_idx;
            prev_v2_idx = cur_v2_idx;
        }
    }

    cout << ans << endl;
    return 0;
}
