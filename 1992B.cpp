#include<iostream>
using namespace std ;

int max(int arr[], int k){
    int max = INT32_MIN ;
    for(int i  =0 ;i< k ; i++){
        if(arr[i] > max) max = arr[i];
    }
    return max ;
}




int main(){

int t;
cin >> t;
while(t--){

int n, k ;
cin>> n>>k ;
int arr[k] ;
for(int i = 0;i< k;i++){
    cin >> arr[i] ;
}

int steps = 0 ;
steps+= (n-max(arr,k)) ;
steps+= n-k-max(arr,k) ;

cout<<steps+1 <<endl;

}



    return 0 ;
}