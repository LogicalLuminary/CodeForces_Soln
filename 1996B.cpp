#include<iostream>
using namespace std ;
int main(){
    // int trials;
    // cin >> trials;
    // for(int p=1;p<=trials ;p++){

        int n;
        cin>>n;
        int arr[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin >>arr[i][j];
            }
            
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout << arr[i][j];
            }
            cout << endl;
            
        }



        // int size= n/k;
        // for(int i=0;i<n;i+=k){
        //     for(int j=0;j<n ;j+=k){
        //         cout << arr[i][j];
        //     }
        // cout << endl;
        // }












    

    return 0;
}