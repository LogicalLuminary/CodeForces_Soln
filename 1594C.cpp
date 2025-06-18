#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
                
        ll n;
        cin >> n;
        char c;
        cin >> c;
        string s;
        cin >> s;
bool ans= 0;int idx=-1;

bool same = true;

for(int i=0;i<n;i++){
    if(s.at(i) != c) same = false;
}
if(same ){cout<<0<<endl;continue;}
    for(int i=n/2+1;i<=n;i++){
        if(s.at(i-1) == c) {ans=1;
        idx = i;
        }
    }
    if(ans){
        cout<<1<<endl;
        cout<<idx<<endl;
    }
    else {
        cout<<2<<endl;
        cout<< n<<" "<<n-1<<endl;
    }




    }

    return 0;
}