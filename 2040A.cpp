#include<iostream>
#include<vector>
using namespace std;

int main(){
int t;
cin >>t ;
while(t--){

    int n,k;
    cin >> n >> k;
    long long int arr[n];
    for(int i= 0; i<n; i++){
        cin>> arr[i];
    }
    for(int i=0 ;i<n ;i++){
        arr[i] = (arr[i]%k) ;
    }

    int arr2[k]={0};
    for(int i=0 ;i < n ;i ++){
        arr2[arr[i]]++;
    }
    bool find=false;;int idx2=-1;
    for(int i=0 ;i< k; i++){
        if(arr2[i] == 1) {
            idx2= i;
            cout<<"YES\n";
            find = true ;
            break;
        }
    }

    if(find){
    int idx=-1;
    for(int i=0;i<n;i++){
        if(arr[i] == idx2){
            idx =i;
        }
    }   
    cout<<idx+1<<endl ;
    }
    else {
        cout<<"NO\n";
    }





}







    return  0;
}