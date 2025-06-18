#include<iostream>
using namespace std;

int main(){

int trials;
cin>> trials;
while(trials--){

    int n;
    cin>> n;

    char str[3];
    if(n<=28){
        str[2] =n-3+'a';
        str[1]='a';
        str[0]='a';
    }

    else if(n<=53){
        str[2]='z';
        str[0]='a';
        str[1]=n-26-1+'a'-1;
    }
    else if(n<= 78){
        str[2]='z';
        str[1]='z';
        str[0]= n-26-26+'a'-1;
    }

    cout<< str[0]<<str[1]<<str[2]<<endl;
    
}

    return 0;
}