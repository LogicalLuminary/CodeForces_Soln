// #include<bits/stdc++.h>

// using namespace std;
// typedef long long int ll;

// int main() {

//     ll n;
//     cin >> n;
//     vector<ll> vec(n);

//     for (ll i = 0; i < n; i++) {
//         cin >> vec[i];
//     }

// ll len=1;
// ll remidx=-1;
// bool rem=0;
// ll lenmax=1;
//     for(ll i=0; i < n-1; i++){

//         if(vec[i+1]> vec[i]) { 
//             len++;}
//         else if(vec[i+1]<= vec[i] && rem==0){

//             rem = true;
//             remidx =i;
//             len++;
//         }
//         else{
//             len = 1;
//             rem =false;
//         }

//    lenmax = max(len,lenmax);

//     }


//     cout<<lenmax<<endl;

//     return 0;
// }




#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {

    ll n;
    cin >> n;
    vector<ll> vec(n);
    for(int i=0;i<n;i++){
        cin>> vec[i];
    }
    ll len =0;
    ll lenmax=0; 
    vector<ll> brk;
    for(int i=0; i<n ; i++){
        if(i==0) continue;
        if(vec.at(i) >vec.at(i-1)){
            //cout<<"t";
        }
        else{
            brk.push_back(i+1);
        }
    }

    // for(auto i:brk){
    //     cout<<i<<" ";
    // }
    //cout<<endl;
ll len2 = brk.size();
    for(int i=0; i<brk.size(); i++){
        if(i ==0  ) continue;
        if(i == brk.size()-1) continue;
        
        ll len1 = brk[i]-brk[i-1];
        ll len2 = brk[i+1]-brk[i];
        
        if(vec.at(brk[i-1]-1)<vec.at(brk[i+1]-1))lenmax = max({len1,len2,len1+len2,lenmax});
        else {lenmax = max({len1, len2,lenmax});}
    
    }

    if(len2 >=2){
    lenmax =max(brk[1]-brk[0],lenmax);
    lenmax= max(lenmax , brk[len2-1]-brk[len2-2]);
    }
    if(len2 == 1){
        lenmax = max({lenmax, n-1});
    }
    if(len2==0){
        lenmax = max({lenmax, n});
    }

cout<<lenmax<<endl;


    return 0;
}