#include<iostream>

using namespace std ;

int min(int arr[],int m){
    int sum = 0;
   // int min= INT32_MAX;
    for(int i=0;i<7;i++){
        if(arr[i]<m){
            sum += (m-arr[i]);
        }

    }
    return sum ;
}


int main(){

int t;
cin>> t;
while(t--){

    int n,m;
    string s;
    cin>>n>>m>>s ;
    int arr[7]={0};
    for(int i=0;i<n;i++){
        arr[s.at(i)-'A']++;
    }
    // for(int j=0;j<7;j++){
    //     cout<<arr[j];
    // }
    cout<<min(arr,m)<<endl;;
   
}


    return 0;
}