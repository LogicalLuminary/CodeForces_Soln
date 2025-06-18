#include<iostream>
using namespace std ;
int gcd(int a, int b) {
    // Base case: If one number becomes 0, the other is the GCD
    if (b == 0)
        return a;
    // Recursive call with b and a % b (remainder)
    return gcd(b, a % b);
}


int main(){
int trials;
cin >> trials;

for(int p=1;p<=trials;p++){

    int l,r;
    cin >>l >>r ;
    int triplets;
    if(l%2 == 1 && r%2 == 1){
    triplets =(r-l)/2+1;
    }
    else if(l%2 == 1 && r%2 == 0) triplets  = (r-l)/2 +1;
    else if(l%2 == 0 && r%2 == 0)   triplets = (r-l)/2 -1+1 ;
    else if(l%2 == 0 && r%2 == 1)triplets  = (r-l)/2 +1;
cout <<triplets/2<< endl;


}





    return 0;
}