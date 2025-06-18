#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
                
        ll n;
        cin >> n;
        vector<ll> vec1(n);
        ll even= 0;
        vector<ll> alleven;
        for(auto &i : vec1){
            cin >> i ;
            if(i %2 == 0){
                even++;
            alleven.push_back(i) ;}
        }
        ll max = *max_element(vec1.begin(), vec1.end()) ;
       
    ll maxodd= -1;
    for(auto &i : vec1){
        if(i>maxodd && i%2 ==1) maxodd =i;
    }
    //cout<<maxodd;


        if(even == 0 || even == n) cout<<0 <<endl;
        else if(max %2 ==1) cout<< even<<endl;
        else{
            sort(alleven.begin(), alleven.end());
            //cout<<"r";
            ll sum = maxodd;
            bool ans = true;
            for(ll i= 0; i<alleven.size(); i++){
                if(sum > alleven[i]) {sum+= alleven[i];}
                else {ans = false;break;}
            //cout<<sum<<endl;

            }
            //cout<<alleven[0]<<" "<<alleven[1]<<" "<<alleven[2]<<" "<<endl;
            //cout<<ans;
            if(ans) cout<<even<<endl;
            else cout<<even+1<<endl;


        }






    }

    return 0;
}