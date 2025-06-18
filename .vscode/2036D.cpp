#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
                
            ll n , m ;
            cin >> n >> m;

            vector<vector<char>> inp(n,vector<char>(m));

            for(int i=0; i<n; i++){
                for(int j = 0; j<m; j++){
                    char c;
                    cin >> c;
                    c= c-'0';
                    inp[i][j] = c;
                }
            }
           
        int count = 0;
        ll total = n *m;
        int it= 1;
        int l =1;
        while(it<=n*m){
            vector<int> vec;

            int i;
            for(i =l-1; i< m-(l-1) && it<= total; i++){
                vec.push_back(inp[l-1][i]);
                it++;
            }
            int j;
            for(j= l-1+1; j<n - (l-1) && it<= total; j++ ){
                vec.push_back(inp[j][m-l]);
                it++;
            }
            for( i= m-l-1 ; i>= l-1 && it<= total; i--){
                vec.push_back(inp[n-l][i]);
                it++;
            }
            for(j=n-1-l; j>l-1 && it<= total; j--){
                vec.push_back(inp[j][l-1]);
                it++;
            }

        vec.push_back(vec[0]);
        vec.push_back(vec[1]);
        vec.push_back(vec[2]);


    for(int i=3; i<vec.size(); i++){
        if(vec[i] == 3 && vec[i-1] == 4 && vec[i-2] == 5 && vec[i-3] == 1)
        { count++;}
    }
    // for(auto i : vec){
    //     cout<<i<<" ";
    // }
    // cout<<endl;


        l++;

}

cout<<count<<endl;



    }
    return 0;
}