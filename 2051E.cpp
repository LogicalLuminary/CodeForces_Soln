// #include<bits/stdc++.h>

// using namespace std;
// typedef long long int ll;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
                
//         ll n,k;
//         cin >> n >>k ;
//         vector<pair<ll,ll>> arr(n);

//     for(int i=0;i <n;i++){
//         cin >> arr[i].second;
//     }
//     for(int i=0;i <n;i++){
//         cin >> arr[i].first;
//     }    

// sort(arr.begin(), arr.end());
// ll sum =0;

// for(int i=0; i<k; i++){
//     sum += arr[i].first;
// }

// for(ll i=k; i<n; i++){
//     sum += arr[i].second;
// }

// cout<<sum<<endl;





//     }

//     return 0;
// }


#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        
                
        ll n, k;
        cin >> n >> k ;
            ll ans=0,ans2 =0;
        vector<pair<ll , ll>> inp(n);
        for(int i=0; i<n; i++){
            cin >> inp[i].second;
        }
        for(int i=0; i<n; i++){
            cin >> inp[i].first ;
        }


{    

sort(inp.begin(), inp.end());


    ll prev =-1;
    vector<pair<ll , ll>> vec;

    for(int i=0;i<n;i++){
        ll count =0;
        for(int j=i; j<n;j++){
            if(inp[j].second < inp[i].first) count++;
        }
        if(inp[i].first > prev){
            vec.push_back({inp[i].first *(n-i),count});
        }

    }
    // for(auto i: vec){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    // cout<<endl;

    sort(vec.begin(), vec.end()) ;

    ll len = vec.size();
    for(int i= len-1; i>= 0 ; i--){
        if(vec[i].second <= k ){ 
            ans = vec[i].first;
            break;}
    }
    
}


{

for(int i=0; i<n; i++){
    swap(inp[i].first, inp[i].second) ;
}
    
sort(inp.begin(), inp.end());


    ll prev =-1;
    vector<pair<ll , ll>> vec;

    for(int i=0;i<n;i++){
        ll count =0;
        for(int j=i; j<n;j++){
            if(inp[j].first < inp[i].first) count++;
        }
        ll p=n-i;
        for(int k=0;k <i; k++){
            if(inp[k].second >= inp[i].first ) {p++;count++;}
        }
        if(inp[i].first > prev){
            vec.push_back({inp[i].first *(p),count});
        }

    }

    // for(auto i: vec){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    // cout<<endl;

    sort(vec.begin(), vec.end()) ;

    ll len = vec.size();
    for(int i= len-1; i>= 0 ; i--){
        if(vec[i].second <= k ){ 
            ans2 = vec[i].first;
            break;}
    }



}

//cout<<ans<<" "<<ans2;
ans = max(ans,ans2);
cout<<ans<<endl;



    }

    return 0;
}











