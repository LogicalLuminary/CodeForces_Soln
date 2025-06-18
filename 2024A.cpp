#include<iostream>

using namespace std;

int main(){

int trials;
cin>> trials;

while(trials--){

int a,b;
cin>> a>>b;

if(a>=b) cout<<a<<endl;

else{
    int diff =b-a;
    if(a-diff>=0) cout<<a-diff<<endl;
    else cout<<'0'<<endl;

// cout<< a<<endl;
}

}


    return 0;
}