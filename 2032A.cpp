#include<iostream>
using namespace std;

int main(){

int trials;
cin>> trials;
for(int i=0;i<trials;i++){

    int n;
    cin>> n;
    int arr[2*n];
    int sum=0;
    for(int i=0;i<2*n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    int min=0,max=0;
    if(sum>n){
        max = 2*n-sum;
    }
    else 
        max = sum;
    if(sum%2==0){
        min =0;
    }
    else{
        min= 1;
    }


    cout<<min<<" "<<max<<endl;
}

    return 0;
}