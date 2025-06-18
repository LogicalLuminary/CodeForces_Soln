#include<iostream>
using namespace std ;
int main(){

int trials;
cin >>trials;
for(int i=1;i<=trials;i++){

    int n;
    cin>> n;
    int x,y;
    cin >>x;cin >>y;

 if(x>y){
        if(n%y==0) cout<<n/y<< endl;
        else cout<< n/y +1 <<endl;
 }
 else {
    if(n%x==0) cout<< n/x<<endl;
    else cout<< n/x+1<< endl;

 }


}














    return 0;
}