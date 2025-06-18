#include<bits/stdc++.h>
using namespace std ;
int main(){

int trials;
cin >>trials;

for(int p=1;p<=trials;p++){

int n,k;
cin >>n;
cin >> k;
int total =0;
int people=0;

int arr[n];
for(int i=0;i<n;i++){
    cin >> arr[i]; 
}

for(int j=0;j<n;j++){

    if(arr[j]>=k){
        total+=arr[j];
    }
    else if ((arr[j]==0)&&(total>0)){
        total--;
        people++;
    }
}
cout<< people<<endl;


}










    return 0;
}