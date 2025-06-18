#include<iostream>
using namespace std;

int main(){

int trials;
cin>> trials;
for(int i=0;i<trials;i++){

    int n;
    cin >> n;

    for(int j=0;j<n;j++){
        cout<<2*j+1<<" ";
    }

}

    return 0;
}