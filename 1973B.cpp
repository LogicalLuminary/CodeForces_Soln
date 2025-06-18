#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;



int main() {
    int t;
    cin >> t;
    while (t--) {
                
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        bool alleq = true;
        for(int i=0; i<n-1; i++){
            if(a[i] == a[i+1]) {}
            else {alleq = false;break;}
        }
        if(alleq){
            cout<<1<<endl;continue;
        }



// ll ans = 0;
// for(int i=0; i<n; i++){
//     ans = ans | a[i];
// }

ll orone=0;bool ans =true;ll prev=-1;
ll len =2;// triplets
for(int i=0;i<n-len-1 ; i++ ){


    for(int j=i; j<i+len; j++){
        orone = orone|a[j];
    }
    if(i == 0)prev = orone;
    else if(orone == prev) continue;
    else{
        ans = false;
        break;
        }


}

cout<<ans;

    }

    return 0;
}