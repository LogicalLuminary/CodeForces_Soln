#include<iostream>

using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){

    int x,y;
    cin>> x>>y ;
    int screen=0;
    if(y%2 == 0){
        if(x<= 7*y/2) screen = y/2;
        else{
            int extra= x-7*y/2;
            if(extra%15 ==0)screen = y/2+extra/15;
           else  screen = y/2 + extra/15+1;
        }

    }

    else{
        if(x<= 7*(y/2) +11) screen = y/2+1;
        else{
           // int spaceleft = 15*(y/2)-x;
            int extra = x-11-7*(y/2);
            if(extra%15 ==0)screen = y/2 +1+ extra/15;
            else { screen = y/2 + 1+extra/15 +1;}
           // if(spaceleft <0){}
        }
    }

cout<<screen<<endl;



    }



 
    return 0;
}