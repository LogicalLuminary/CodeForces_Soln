#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vec;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define vec2d(n, m, val) vector<vec>(n, vec(m, val))
#define debug(x) cerr << #x << " = " << (x) << "\n";
#define newl cout<<endl;



// Custom input function for both static and dynamic sizing
template <typename T>
void cinData(T& container, int n = -1) {  // Default to -1 for dynamic input
    if (n != -1) {  // If size is provided, use the static approach
        if constexpr (is_same_v<T, vector<typename T::value_type>>) {
            container.resize(n);  // Resize vector to hold 'n' elements
            for (int i = 0; i < n; ++i) {
                cin >> container[i];  // Input elements into vector
            }
        } else if constexpr (is_same_v<T, set<typename T::value_type>>) {
            for (int i = 0; i < n; ++i) {
                typename T::value_type x;
                cin >> x;
                container.insert(x);  // Input elements into set
            }
        } else if constexpr (is_same_v<T, map<typename T::key_type, typename T::mapped_type>>) {
            for (int i = 0; i < n; ++i) {
                typename T::key_type key;
                typename T::mapped_type value;
                cin >> key >> value;  // Input key-value pairs into map
                container[key] = value;
            }
        } else if constexpr (is_same_v<T, list<typename T::value_type>>) {
            for (int i = 0; i < n; ++i) {
                typename T::value_type x;
                cin >> x;
                container.push_back(x);  // Input elements into list
            }
        } else if constexpr (is_same_v<T, vector<pair<typename T::value_type::first_type, typename T::value_type::second_type>>>) {
            container.resize(n);
            for (int i = 0; i < n; ++i) {
                typename T::value_type x;
                cin >> x.first >> x.second;  // Input pair elements (first and second)
                container[i] = x;
            }
        } else {
            cerr << "Unsupported container type for cinData\n";
            exit(1);
        }
    } else {  
        // If size is not provided, dynamically read elements
        if constexpr (is_same_v<T, vector<typename T::value_type>>) {
            typename T::value_type temp;
            while (cin >> temp) {
                container.push_back(temp);  // Dynamically push elements into vector
            }
        } else if constexpr (is_same_v<T, set<typename T::value_type>>) {
            typename T::value_type temp;
            while (cin >> temp) {
                container.insert(temp);  // Dynamically insert into set
            }
        } else if constexpr (is_same_v<T, map<typename T::key_type, typename T::mapped_type>>) {
            typename T::key_type key;
            typename T::mapped_type value;
            while (cin >> key >> value) {
                container[key] = value;  // Dynamically insert into map
            }
        } else if constexpr (is_same_v<T, list<typename T::value_type>>) {
            typename T::value_type temp;
            while (cin >> temp) {
                container.push_back(temp);  // Dynamically push elements into list
            }
        } else if constexpr (is_same_v<T, vector<pair<typename T::value_type::first_type, typename T::value_type::second_type>>>) {
            typename T::value_type temp;
            while (cin >> temp.first >> temp.second) {
                container.push_back(temp);  // Dynamically push pair elements into vector
            }
        } else {
            cerr << "Unsupported container type for cinData\n";
            exit(1);
        }
    }
}


// Unified coutData function for containers and pairs
template <typename T>
void coutData(const T &container) {
    if constexpr (is_same_v<T, pair<typename T::first_type, typename T::second_type>>) {
        cout << container.first << ' ' << container.second << ' ';
    } else {
        for (const auto &el : container) {
            cout << el << ' ';
        }
    }
    newl;
}



    int main() {
        ios::sync_with_stdio(false);
        cin.tie(0);

        int t;
        cin >> t;
        while (t--) {
        
        
            





    }

    return 0;
}