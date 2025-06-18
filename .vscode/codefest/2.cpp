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


// coutData function for containers and pairs

//pair
// template <typename T1, typename T2>
// void coutData(const pair<T1, T2> &p) {
// cout << p.first << ' ' << p.second << ' ';
// cout << '\n';
// }

// Overload for map
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

ll countDivisors(ll n) {
    ll count = 0;
    for (int i = 1; i <= sqrt(n)+1; i++) {
        if (n % i == 0) {
            if (n / i == i) {
                count++;  // If both divisors are the same
            } else {
                count += 2;  // Count both divisors i and n/i
            }
        }
    }
    return count;
}
bool isPrime(int n) {
    // Handle base cases
    if (n <= 1) {
        return false; // Numbers less than or equal to 1 are not prime
    }
    if (n == 2) {
        return true; // 2 is prime
    }
    if (n % 2 == 0) {
        return false; // Even numbers greater than 2 are not prime
    }
    
    // Check odd divisors from 3 to sqrt(n)
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return false; // If n is divisible by any i, it's not prime
        }
    }
    
    return true; // n is prime if no divisors were found
}

ll result(ll num, ll denom) {
    ll MOD = 1e9+7;
    ll result = 1, base = denom;

    // Compute modular inverse of denom using modular exponentiation
    ll exp = MOD - 2;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        exp /= 2;
    }

    ll denom_inv = result;

    return (num * denom_inv) % MOD;
}
long long gcd(long long a, long long b, long long &x, long long &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    
    long long x1, y1;
    long long g = gcd(b, a % b, x1, y1);
    
    x = y1;
    y = x1 - (a / b) * y1;
    
    return g;
}

// Function to compute modular inverse of a modulo m
long long modInverse(long long a, long long m) {
    long long x, y;
    
    // Compute gcd of a and m
    long long g = gcd(a, m, x, y);
    
    // If gcd(a, m) != 1, then inverse doesn't exist
    if (g != 1) {
        cout << "Inverse doesn't exist!" << endl;
        return -1;
    }
    
    // Modulo operation to ensure the result is positive
    long long result = (x % m + m) % m;
    return result;
}

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(0);

        int t;
        cin >> t;
        while (t--) {


            ll n;
            cin >> n;
            vec v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }

        ll total= 0;
        ll prime=0;
        for(ll i=0; i<n; i++){
            if(isPrime(i)){
                prime+= countDivisors(i);
            }
            total += countDivisors(i);

        }



        cout<<prime<<" "<<total<<" ";
        long long inverse = modInverse(total, 1e9+7);
        // ll ans = result(prime,total);
        // cout<<ans<<endl;
        cout<<inverse<<endl;




        }

    return 0;
}