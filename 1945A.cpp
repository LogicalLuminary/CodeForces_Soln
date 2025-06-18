#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
                
        ll i,e,u;
cin >> i >> e >> u;
        if(e%3 == 1 && u<=1) {cout<<-1<<endl; continue ;}
        if(e%3 == 2 && u == 0){cout<<-1<<endl; continue ;}  

ll donet = ceil(e/3.0);
    
ll ans= ceil((u-(3*donet-e))/3.0)+donet+i ;
cout<<ans <<endl;


    }

    return 0;
}