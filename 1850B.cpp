#include<iostream>
#include<vector>
#include<algorithm>
#include<tuple>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){


    int a;
    cin >> a;
    vector<pair<int , int>> anmol(a);
    int arr[a]={0};
    for(int i=0; i<a ;i++){
        cin >> arr[i];
        cin>>anmol[i].first ;
        anmol[i].second = i;
    }

sort(anmol.begin(), anmol.end());
int ans=0;
for(int i=0 ; i<a ;i++){
    if(arr[anmol[a-1-i].second] <=10){
        ans =anmol[a-1-i].second;
        break;
    }
}
cout<<ans+1<<endl;

    }

    return 0;
}