#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
                
        ll n, m , k;
        cin >> n>> m >> k;

        vector<ll> vecm(m);
        vector<ll> veck(k);


    for(int i=0; i<m; i++){
        cin >> vecm[i];
    }
    for(int i=0; i< k; i++){
        cin >> veck[i];
    }

        if(k<n-1){
            vector<char> ans;
            for(int i=0; i<m; i++){
                ans.push_back('0');
            }
            for(auto i:ans){
                cout<<i;
            }
            cout<<endl;continue;
        }
        else if(k== n){
            vector<char> ans;
            for(int i=0; i<m; i++){
                ans.push_back('1');
            }
            for(auto i:ans){
                cout<<i;
            }
            cout<<endl;continue;            
        }
    


    ll niata=-1;
    for(int i=0;i<k; i++){
       if(veck[i] !=(i+1)) {
        niata = i+1;
        break;
        }
    }
    if(niata == -1){
        niata = n;     
    }

//cout<<niata<<endl;
 

    for(int i=0; i<m;i++){
        if(vecm[i] == niata){
            cout<<'1';
        }
        else{
            cout<<'0';
        }
    }
    cout<<endl;








    }

    return 0;
}