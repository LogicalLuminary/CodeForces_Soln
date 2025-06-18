#include<bits/stdc++.h>
using namespace std;

int main(){


int trials;
cin >> trials ;
for( int i=1;i<=trials ;i++){

    int n;
    cin >>n;
    int arr[n];
    for(int j=0;j<n ;j++){
        cin >>arr[j];
    }

    {if(n==2){
        if(arr[0]==arr[1]+1)
            cout<<"NO"<<endl;
        else if(arr[0]+1==arr[1])
         cout <<"NO\n";
        else 
            cout<< "YES\n";
    }

    else {
    cout<< "NO"<<endl;}
    }
}





    return 0;
}