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

bool solve(vec &v, string s,int n,vec & sumv, vec& v2, int siz){

//cout<<s<<endl;

    //coutData(v2);
  
    //coutData(sumv);

    bool poss = true;
    for(int i=0; i < siz; i++){
        if(sumv[v2[i]] !=(2+v2[i])*(v2[i]+1)/2) {
            poss = false ;
            return poss;
        }
    }
    
    return poss;

}



    int main() {
        ios::sync_with_stdio(false);
        cin.tie(0);

        int t;
        cin >> t;
        while (t--) {


            ll n,q;
            cin >> n >> q ;
            vec v(n);
            cinData(v,n);
            //coutData(v);
            string s;
            cin >> s ;
            vec vq(q);
            cinData(vq,q);

            vec sumv(n);
            sumv[0]=v[0];
        for(int i=1; i<n ; i++){
            sumv[i]=sumv[i-1]+v[i];
        }      

    vec v2;
    for(int i=0;i<n-1; i++){
        //cout<<"k";
        if(s.at(i) == 'L'&& s.at(i+1)=='R'){
            v2.pb(i);
            //cout<<"j";
        }
    }// v2 has all idx where LR pair
    int siz = v2.size();        

            for(int i=0; i<q; i++){
                ll p=vq[i];
                
                //cout<<p<<endl;
            //cout<<s.at(p-1)<<endl;
                if(s.at(p-1) == 'R') {
                    s.at(p-1)= 'L';
                    if(p<n){
                        if(s.at(p) == 'R'){
                            v2.pb(p-1);
                        }
                    }
                }
                else if(s.at(p-1) =='L') {
                    s.at(p-1)='R';
                    if(p>1){
                        if(s.at(p-2)=='L'){
                            v2.pb(p-2);
                        }
                    }
                    
                    }
                if(solve(v,s,n,sumv,v2,siz)){cout<<"YES\n";}
                else cout<<"NO\n";

            }





        }

    return 0;
}