#include<iostream>
using namespace std ;

int main(){
int t;
cin >> t;
while(t--){
//cout<<']';
    int n;
    cin >> n;
    int arr[n] ;
    for(int i=0;i<n;i++){
        cin >> arr[i] ;
    }
    //cout<<n;
    bool intwo =false ;

    for(int i=1;i<=n ;i++){
        int j= arr[i-1];
        if(arr[j-1] == i) intwo = true;
    }

if(intwo){cout<< 2<<endl ;}

else{
cout<<3<<endl;
}





}

    return 0;
}