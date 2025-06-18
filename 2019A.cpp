#include<iostream>
using namespace std;




int main(){

int trials;
cin>> trials;
while(trials--){


    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    int max = arr[0];
    int maxidx =0;
    //int noofmax=0;
    for(int i=0;i<n;i++){
        if(max<arr[i]){ 
            max= arr[i];
            maxidx =i;
        }
    }
    bool maxatodd= false;
    for(int j=0;j<n;j++){
        if(arr[j]== max && j%2 == 0) maxatodd =true;
    }
    

    if(n%2==0) {
        cout<< n/2+max;
    }
    if(n%2  == 1){
        if(maxidx %2 ==0){
            cout<< n/2+max+1;
        }
        else if(maxidx %2 == 1 && maxatodd == true){
            cout<< n/2+max+1;
        }
        else{
            cout<< n/2+max;
        }

    }
    cout<<endl;
  }
 
    return 0;

}