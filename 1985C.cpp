#include<iostream>

using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){


      long long int n;
        cin >> n;
        int arr[n] ;
        //int max=-1,maxidx=-1;

        for(int i =0 ;i <n ;i++){
            cin >> arr[i] ;
        }
        


long long int ans=0;

long long int arrmax[n];
long long int max =0;
for(int i =0 ;i < n;i++){
    if(arr[i]>=max){
        max = arr[i];
        arrmax[i] = arr[i];
    }
    else{
        arrmax[i] = max;
    }
}
long long int arrsum[n]={0};
long long int sum =0;
for(int i=0;i<n;i++){
    sum += arr[i];;
    arrsum[i] = sum;
}

for(int i =0; i< n;i++){
    if(arrmax[i] == arrsum[i]-arrmax[i]) ans++ ;
}




cout<<ans<<endl ;





    }
    return 0;
}