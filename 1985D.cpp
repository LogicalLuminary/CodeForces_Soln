#include<iostream>

using namespace std;

int main(){

int trials;
cin>> trials;
while(trials--){

int n,m;
cin>> n>> m;
char arr[n][m];

int x,y;
for(int i= 0;i<n;i++){
    for(int j=0;j<m;j++){
        cin >> arr[i][j];
        if(arr[i][j] == '#') x=j+1;
    }
}

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(arr[j][i] == '#') y = j+1;
    }
}


cout<< y<<" "<< x<< endl ; 



}


    return 0;
}