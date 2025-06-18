#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vec;
typedef vector<vector<char>> vec2d;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define vec2d(n, m, val) vector<vector<char>>(n, vector<char>(m, val))
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



bool loop( vector<vector<char>> &isloop,vector<vector<char>> &inp,ll n,ll m,int i,int j){
    ll done =0;
    while(done<=m*n){

        if(inp[i][j] =='U') {
            if(i==0) return false;
            i= i-1;
            if(isloop[i][j] == '1') return true;

        }
        if(inp[i][j]== 'D'){
            if(i== n-1) return false;
            i=i+1;
            if(isloop[i][j] == '1') return true;
            
        }
        if(inp[i][j] =='L'){
            if(j == 0) return false;
            j= j-1;
            if(isloop[i][j] == '1') return true;

        }
        if(inp[i][j] == 'R'){
            if(j==m-1) return false;
            j=j+1;
            if(isloop[i][j] == '1') return true;

        }
        done++;

    }
    return true;
}


    int main() {
        ios::sync_with_stdio(false);
        cin.tie(0);

        int t;
        cin >> t;
        while (t--) {


            ll n,m;
            cin >> n >> m;
            vec2d inp = vec2d(n,m,'0');

            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    cin>>inp[i][j];
                }
            }

        vec2d isloop = vec2d(n,m,'0');// if loop then 1
        for(int i=0; i<n; i++){
            for(int j =0; j<m; j ++){
                if(j!= m-1){
                    if(inp[i][j] =='R' && inp[i][j+1] =='L'){
                        isloop[i][j]= '1';
                        isloop[i][j+1] ='1';
                    }
                }
                if(i != n-1){
                    if(inp[i][j] == 'D' && inp[i+1][j] =='U'){
                        isloop[i][j]='1';
                        isloop[i+1][j]='1';
                    }
                }
            }
        }

    // for(int i=0; i<n;i++){
    //     for(int j=0; j<m; j++){
    //         cout<<isloop[i][j]<<" ";
    //     }
    //     newl;
    // }

for(int p=0;p<n;p++){
    for( int q=0;q<m;q++){
        for(int i=0; i<n; i++){
            for(int j =0; j<m; j ++){
                if(j!= m-1){
                    if(inp[i][j] =='R' && inp[i][j+1] =='L'){
                        isloop[i][j]= '1';
                        isloop[i][j+1] ='1';
                    }
                }
                if(i != n-1){
                    if(inp[i][j] == 'D' && inp[i+1][j] =='U'){
                        isloop[i][j]='1';
                        isloop[i+1][j]='1';
                    }
                }
            }
        }
        
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(inp[i][j] == 'L' && j!= 0){
                    if(isloop[i][j-1] == '1'){
                        isloop[i][j]= '1';
                    }
                }
                if(inp[i][j] == 'R' && j != m-1){
                    if(isloop[i][j+1] == '1'){
                        isloop[i][j] = '1';
                    }
                }
                if(inp[i][j] == 'U' && i!=0){
                    if(isloop[i-1][j] =='1'){
                        isloop[i][j]='1';
                    }
                }
                if(inp[i][j] == 'D' && i != n-1){
                    if(isloop[i+1][j] =='1'){
                        isloop[i][j] ='1';
                    }
                }
            }
        }

        
        if(inp[p][q] == '?'){

            if(q!=0 && isloop[p][q-1] == '1'){
                inp[p][q] = 'L';
            }
            else if(q != m-1 && isloop[p][q+1] == '1'){
                inp[p][q]= 'R';
            }
            else if(p!=0 && isloop[p-1][q]=='1'){
                inp[p][q] = 'U';
            }
            else if(p!= n-1 && isloop[p+1][q] =='1'){
                inp[p][q]='D';
            }

            // else{
            //     if(p==0) inp[p][q]='D';
            //     else if(p == n-1) inp[p][q]= 'U';
            //     else if(q==0) inp[p][q]= 'R';
            //     else if(q==m-1)inp[p][q]='L';
            // }


        }
        
    }
}

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(inp[i][j] == 'L' && j!= 0){
                    if(isloop[i][j-1] == '1'){
                        isloop[i][j]= '1';
                    }
                }
                if(inp[i][j] == 'R' && j != m-1){
                    if(isloop[i][j+1] == '1'){
                        isloop[i][j] = '1';
                    }
                }
                if(inp[i][j] == 'U' && i!=0){
                    if(isloop[i-1][j] =='1'){
                        isloop[i][j]='1';
                    }
                }
                if(inp[i][j] == 'D' && i != n-1){
                    if(isloop[i+1][j] =='1'){
                        isloop[i][j] ='1';
                    }
                }
            }
        }

//fill the questionmars if no previos filled, then done

// for(int i=0; i<n; i++){
//     for(int j=0; j<m; j++){
//         if(isloop[i][j] == '0'){
//             if(loop(isloop,inp,n,m,i,j)) isloop[i][j]= '1';
//         }
//     }
// }

ll count=0;
    for(int i=0; i<n;i++){
        for(int j=0; j<m; j++){
            if(isloop[i][j] == '1') count++;
        }
        
    }
        for(int i=0;i<n;i++){
            for(int j=0; j<m; j++){
                cout<<isloop[i][j]<<" ";
            }
            newl;
        }
        for(int i=0;i<n;i++){
            for(int j=0; j<m; j++){
                cout<<inp[i][j]<<" ";
            }
            newl;
        }
    cout<<count<<endl;





        }

    return 0;
}