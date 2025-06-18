#include<iostream>

using namespace std ;

int main(){

int t;
cin>> t;
while(t--){

    int x,y,k;
    cin>> x >> y>> k;

    if(k%2 == 1){

        for(int i=1; i<= k/2;i++){
            cout<<i<<" "<<i<<endl;
            cout<<-i<<" "<<-i<<endl;
        }

        cout<<x*k<<" "<<y*k<<endl;
        

    }

    else{
        if(x==0 && y==0){
            for(int j=1;j<k/2+1;j++){
            cout<<j<<" "<<j<<endl;
            cout<<-j<<" "<<-j<<endl;
            }

        }
        else{
        
       int p=1;
        for(int i=1;p<k/2 ;i++){
            if(!((i == x|| i==-x) && (i== y || i== -y))){
            cout<<i<<" "<<i<<endl;
            cout<<-i<<" "<<-i<<endl;
            p++;
            }
        }
        cout<<'0'<<" "<<'0'<<endl;
        cout<<x*k<<" "<<k*y<<endl ;
        
        }

    }


}


    return 0;
}