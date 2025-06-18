#include<iostream>

using namespace std;

int main(){

int trials;
cin>> trials;

for(int i=0;i<trials;i++){

    int n;
    cin>> n;
    int arr[n]={0};
    for(int j=0;j<n;j++){
        int k;
        cin>> k;
        arr[k-1]++;
    }

    int ans=0;
    for(int l=0;l<n;l++){
        ans += (arr[l]/2) ;
    }

    cout<< ans<<endl;



}


    return 0;
}