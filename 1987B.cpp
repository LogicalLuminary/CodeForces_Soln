#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {
    int t;
    cin >> t;

    while (t--) {
                
        ll n;
        cin >> n;
        vector<ll > arr1(n);
        vector<pair<ll , ll > >arr2;
        for(int i= 0; i<n  ; i++){
            cin >> arr1[i];
        }

        ll max= arr1[0];int j=0;
        for(int i=0 ; i< n; i++){
            if(arr1[i]>= max) max = arr1[i];
            else{
                arr2.push_back({0,0});
                arr2[j].first = max- arr1[i];
                arr2[j].second  = i ;
                j++;
                
            }
        }
        // for(auto &it : arr1){
        //     cout<< it<<endl;
        // }


       sort(arr2.begin(), arr2.end());
        //for(auto &it: arr2 ){
        //     cout<< it.first << " "<<it.second<<endl ;
        // }
        ll sum= 0;
        for(int i=0; i< arr2.size(); i++){
            sum += arr2[i].first ;
        }
       
       // sort(arr2.begin(), arr2.end(),greater<long long int>());
        ll sumsave=0;ll size = arr2.size() ;
        ll sum2=0;
        for(int i=0 ;i < arr2.size();i++ ){
            if((arr2[i].first-sum2) <0) break;
            sumsave += (size-1)*(arr2[i].first-sum2)  ;
            size--;sum2=arr2[i].first;
           // cout<<sumsave<<endl;;
        }

       // cout<<sumsave<<endl;
        // ll sum= 0;
        // for(int i=0; i< arr2.size(); i++){
        //     sum += arr2[i].first ;
        // }
        //cout<<sum<<endl;
        cout<<2*sum-sumsave<<endl;


        

}

    return 0;
}