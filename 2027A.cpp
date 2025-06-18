#include<iostream>

using namespace std ;

int main(){

int t;
cin>> t;
while(t--){

    int l,r,k ;
    cin>> l>> r>> k ;

    int num= r/k ;
    int ans=-1;
    if(num > l) ans = num - l +1 ;
    else if(num == l ) ans  = 1 ;
    else {
        ans = 0 ;
    }
    cout<<ans<<endl;

}



    return  0;
}