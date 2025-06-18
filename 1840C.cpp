#include<bits/stdc++.h>
using namespace std;
//int chooseAtLeastK(int n, int k) {
//     std::vector<int> dp(n + 1, 0);  // dp[i] will store the number of ways to choose i items from n items
//     dp[0] = 1;  // There is 1 way to choose 0 items (the empty subset)

//     for (int i = 1; i <= n; ++i) {
//         // Iterate backwards to avoid using the same element more than once
//         for (int j = i; j > 0; --j) {
//             dp[j] += dp[j - 1];
//         }
//     }

//     // Sum all dp values from dp[k] to dp[n]
//     int result = 0;
//     for (int i = k; i <= n; ++i) {
//         result += dp[i];
//     }

//     return result;
// }


int main(){
    int t;
    cin >> t;
    while(t--){

   long long  int n,k,q;
    cin >> n>> k>> q ;
    vector<long long int> vec(n);
    for(int i=0;i<n;i++){
        cin >> vec[i] ;
    }

    vector<long long int> consec;
    consec.push_back(0);
    long long int j=0;
for(long long int i=0;i<n; i++){
    if(vec[i] <= q){
         consec[j]++;
    }
    else{
        if(consec[j]>= k){
        consec.push_back(0);
        j++;}
        consec[j]=0;
    }
}
//if(consec[j]< k) consec[j]=0;
//cout<<consec.size();
long long  int ans=0;
for(int i=0;i<consec.size();i++){
   if(consec[i] >= k)
    ans += (consec[i]-k+1)*(consec[i]-k+2)/2.0 ;
}
//ans += chooseAtLeastK(2,1);
cout<<ans<<endl;

    }




    return 0;
}