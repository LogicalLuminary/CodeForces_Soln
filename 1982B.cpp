#include<bits/stdc++.h>

using namespace std;

int main(){

int t;
cin >> t;

while(t--){

    long long int x,y,k;
    cin >> x >> y >> k ;
long long int x2=x;
long long int iter=0;
for(k; k>=1; k = k-(x2%y)){

    x+=1 ;

    while(x%y == 0){
        x= x/y ;
        iter++;
    }
    if(x<y){
        k = k%y;
    }

}

cout<< x<<endl;//<<iter<<endl ;

}

    return 0;
}