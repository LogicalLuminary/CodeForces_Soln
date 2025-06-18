#include<iostream>
#include<vector>
#include<utility>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){

    int n;
    cin >> n;
    vector<pair<int,int>> vec(n);
    
    for(int i=0; i< n; i++){
        cin >> vec[i].first;
    }
    for(int i =0; i< n ;i++){
        cin >> vec[i].second ;
    }

int maxpair=INT32_MIN;int maxidx=-1 ;
for(int i=0 ;i< n ; i++){
    if(maxpair <= min(vec[i].first,vec[i].second) ) 
        {maxpair =min(vec[i].first,vec[i].second);
        maxidx =i ;}
}//cout<<maxidx;

//cout<<maxpair<<endl;
int sum=0;
for(int i=0; i< n; i++){
    if(i != maxidx){
        sum += max(vec[i].first, vec[i].second);
    }
    else{
        sum+=(vec[i].first+vec[i].second) ;
    }
}

cout<<sum<<endl;

    }


    return 0;
}