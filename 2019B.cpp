#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
                
        ll n, q;
        cin >> n >> q ;
        vector< ll > inp1(n);
        vector<pair<ll,ll>> inp2(q);

        for(int i=0;i<n;i++){
            cin >> inp1[i];
        }
        for(int i=0; i<q; i++){
            cin >> inp2[i].first ;
            inp2[i].second = 0;
        }



    vector<ll> arr1; vector<ll>arr2;
    for(int i =1 ;i<=n-i; i++){
        arr1.push_back(i*(n-i));
        
        if(i == n-i)arr2.push_back((inp1[i]-inp1[i-1]-1));
        else
        arr2.push_back((inp1[i]-inp1[i-1]-1) + (inp1[n-i]-inp1[n-i-1]-1)) ;

    }
    for(int i=1;i<= n-i+1; i=i+1){
       // cout<<i<<" ";
        arr1.push_back((i*(n-i+1))-1);// -1 coz i,i not accptable segmt
        if((n%2 == 1) && (i==n-i+1)) arr2.push_back(1);
        else {arr2.push_back(2);};
        //cout<<i<<" ";
    }

 

// for(int i=0; i< arr1.size() ; i++){
//     //cout<<"r";
//     // find arr[i] in inp2.first 
//     // if present at idx i, inp2[i].sec += arr[i];
//       // Use std::find_if to search for the target in the .first elements
//     int temp = arr1[i];
//     auto it = find_if(inp2.begin(), inp2.end(), [temp](const pair<int, int>& p) {
//         return p.first == temp;
//     });

//     if (it != inp2.end()) {
//         // Compute the index
//         int index = distance(inp2.begin(), it);
//         inp2[index].second += arr2[i];
//        // cout<<index<<" "<<arr2[i]<<endl;
//        // cout << "Index of " << arr1[i] << " in .first: " << index << endl;
//     } else {
//         //cout << target << " not found in .first" << endl;
//     } 
// }
////no need of above finding index n so-on, if use map for pairing then removing duplicacy
// use map for all above shit
        // unordered_map<ll, ll> valueMap;
        // for (int i = 0; i < arr1.size(); i++) {
        //     valueMap[arr1[i]] += arr2[i];
        // }

        // // Update inp2 and print in the original order
        // for (auto& p : inp2) {
        //     if (valueMap.count(p.first)) {
        //         p.second = valueMap[p.first];
        //     }
        //     cout << p.second << " ";
        // }
        // cout << endl;


  



    }

    return 0;
}