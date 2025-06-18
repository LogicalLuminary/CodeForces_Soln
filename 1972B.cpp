#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){

        int n;
        cin >> n;
        int arr[n] ; ry
        for(int i =0; i< n; i++){
            cin >> arr[i] ;
        }

        int arrnum[n] = {0};
        char arrc[n];

        for(int i =0 ; i< n ;i++){
           arrc[i] =  arrnum[arr[i]]+'a' ;
           arrnum[arr[i]]++ ;
        }
        for(int i =0; i<n ;i++){
            cout<< arrc[i] ;
        }

cout<<endl ;


    }






    return 0;
}