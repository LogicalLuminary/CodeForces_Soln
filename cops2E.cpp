#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {

    ll n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<ll> arr;
    map<char,bool>map1;
    for(int i=0; i<k; i++){
        char temp;
        cin >> temp;
        map1[temp]= true;
    }
    
    ll len =0;

    for(ll i=0; i< s.length() ; i ++){
        if(map1[s.at(i)] != true){
            arr.push_back(len); 
            len =0;
        }
        else if(i == s.length()-1 && map1[s.at(i)] == true){
            len++;
            arr.push_back(len);
        }
        else{
            len++;
        }
    }



    ll ans=0;
    for(ll i= 0; i<arr.size(); i++){
        ans += arr[i]*(arr[i]+1)/2 ;
    }
    cout<<ans<<endl;

    return 0;
}