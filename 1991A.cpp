#include<iostream>

using namespace std;

int main(){

int trials;
cin>> trials;

while(trials--){


    int n;
    cin>> n;

    int arr[n];

    
    for(int j=0;j<n;j++){
        cin>> arr[j];
    }
    int max = arr[0];
    for(int i=0;i<n;i=i+2){
        
        if(arr[i]> max){
            max = arr[i];
        }
    }

    cout<< max<<endl;



}



    return 0;
}