// #include<bits/stdc++.h>

// using namespace std;
// typedef long long int ll;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//             string s1,s2;
//             cin >> s1 >> s2 ;
//             vector<vector<int>> str2arr(26);

//         for(int i=0; i<s2.length(); i++){
//             str2arr[(s2.at(i)-'a')].push_back(i);
//         }
//    // if(t== 447)cout<<s1<<s2<<endl;
// //          for(int i=0;i<26;i++){
// //             // cout<< str2arr[i].size();
// //             cout<<i <<" ";
// //  ;           for(auto & j : str2arr[i]){
// //                 cout<< j <<" ";//<<endl;
// //             }
// //             cout<<endl;
            
// //         }
//          ;ll prvidx =-1 ;vector<int> count(1);
//         int max=-1;int j=0;int left =0;
//         for(int i=0;i < s1.length() ;i ++){
// //cout<<"r";
//    // cout<< str2arr[(s1.at(i) - 'a')] ;
// //cout<<(s1.at(i)-'a');
//              if(str2arr[(s1.at(i)-'a')].size())
//               {  //cout<<"m";
//             auto it = upper_bound(str2arr[s1.at(i)-'a'].begin(), str2arr[s1.at(i)-'a'].end(), prvidx);
//                // cout<<prvidx;//<<endl;//cout<<(*it);
//             if (it != str2arr[s1.at(i)-'a'].end()) {
//                 //cout<<" r";
//                 count[j]++;

//                // if(count> max) max = count;
//                // cout<<prvidx<<endl;
//                // cout << "The element just greater than " << target << " is " << *it << endl;
//             } else {
//                     count.push_back(0);
//                     j++;
//                     prvidx = -1;
//                     i--;
//                 //  cout<<
//                 //cout << "No element greater than " << target << " exists." << endl;
//             }


//               }

//         }
//         //cout<<count[0]<<" "<<count[1];
//         int cnt = *max_element(count.begin(), count.end());
//     cout<<s1.length()+ s2.length() - cnt+left <<endl ;


// // issue for aa , aba shoul be 4 but gives 3 . WWROOOOONNNNNNNNNGGGG LLOOGGGGIIIIIIIICCC

//     }

//     return 0;
// }

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
        while (t--) {

            

            string a, b;
            cin >> a >>b ;

            vec va(26), vb(26);

            for(int i=0;i<a.length(); i++){
                va[a.at(i)-'a']++;
            }
            for(int i=0; i<b.length(); i++){
                vb[b.at(i)-'a']++;
            }
            if(t == 1000-157) cout<<a<<b;

            int len = a.length();

            for(int i=0; i<26; i++){
                if(vb[i] > va[i]){
                    len+= vb[i]-va[i];
                }
            }

            cout<<len<<endl;





        }

    return 0;
}