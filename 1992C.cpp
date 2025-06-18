#include<iostream>

using namespace std;
int main(){

int trials;
cin>> trials;
while(trials--){

    int n,m,k;
    cin>> n>> m>> k;

    for(int i=0;i<n-m;i++){
        cout<<n-i<<" ";
    }
    for(int j=0;j<m;j++){
        cout<< j+1<<" ";
    }

}

    return 0;
}