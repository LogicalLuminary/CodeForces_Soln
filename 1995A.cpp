#include<iostream>
using namespace std; 



int main(){
int trials;
cin>> trials;

while(trials--){

    int n,k;
    cin>> n>> k;
    int temp = n;
    int diag=0;
    int i=0;// iterations

    while(k>0){
        i++;
        k = k-temp;
        if(i%2 == 1) temp--;
    }
    cout<< i<<endl;

}



    return 0;
}