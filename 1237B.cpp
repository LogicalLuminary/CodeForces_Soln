// #include<bits/stdc++.h>

// using namespace std;
// typedef long long int ll;

// int main() {

//     int n;
//     cin >> n;
//     map<int,int> inp1;
//     vector<pair<int ,int> >inp2(n);

// int key;
//     for(int i=0; i<n;i++){
//         cin >> key;
//         inp1[key]= i+1;
//     }

//     for(int i=0; i<n;i++){
//         cin >> key;
//         inp2[i].first = inp1[key];
//         inp2[i].second = i+1;
//     }

// // for( auto &i : inp1){
// //     cout<< i.first<<" "<<i.second<<endl;
// // }
// // cout<<endl;
// // for(int i=0;i<n;i++){
// //     cout<< inp2[i].first<<" "<<inp2[i].second<<endl;
// // }
// //cout<<endl;
// sort(inp2.begin(), inp2.end()) ;

// // for(int i=0;i<n;i++){
// //     cout<< inp2[i].first<<" "<<inp2[i].second<<endl;
// // }

// int max2nd = inp2[0].second ;
// int ans=0;
// for(int i=0; i<n ;i++){
//     if(inp2[i].second >= max2nd){
//         max2nd = inp2[i].second ;
//     }
//     else{
//         ans++ ;
//     }
// }

// cout<<ans;


//     return 0;
// }





// #include<bits/stdc++.h>

// using namespace std;
// typedef long long int ll;

// int main() {
//     int n;
//     cin >> n;

//     int arr[n+1],arr2[n+1];
//     for(int i=1; i<= n; i++){
//         int k;
//         cin >> k;
//         arr[k]=i ;
//     }
//     for(int i=1 ;i<= n ;i++){
//         int k;
//         cin >> k;
//         arr2[i]= arr[k];
//     }

// for(int i=1;i<=n;i++){
//     cout<<arr2[i]<<" ";

// }

//     return 0;
// }