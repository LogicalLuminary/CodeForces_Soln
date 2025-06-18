#include<iostream>
using namespace std;
 
int main(){
    
    int t;
    cin>> t;
    while(t--){
        
        int a,b,c ;
        cin>> a>> b>>c ;
        for(int i=0;i<5;i++){
           if (a <= b && a <= c) {
    a++; // Increment 'a' if it's the smallest
} else if (b <= a && b <= c) {
    b++; // Increment 'b' if it's the smallest
} else {
    c++; // Increment 'c' if it's the smallest
}

        }
        cout<<a*b*c<<endl;
     
    }
    
 
    return 0;
}