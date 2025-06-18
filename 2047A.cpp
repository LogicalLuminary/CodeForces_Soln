// #include<iostream>
// #include<cmath>

// using namespace std ;

// int main(){

// int t; ;
// cin >> t ;
// while(t--){


// int n;
// cin>> n;
// int arr[n];
// for(int i = 0 ; i  < n ; i ++ ){
//     cin>> arr[i] ;
// }

// float sum = 0;
// int happy = 0;

// for(int i = 0 ; i <  n ; i ++){

//     sum += arr[i] ;
// if(sum - sqrt(sum)*sqrt(sum) == 0 && ((int)sum %2 == 1)) happy++;



// }

// cout<< happy<<endl ;





// }

//     return  0 ;
// }



#include<iostream>
#include<cmath>

using namespace std ;

bool isSquareOfOdd(int num) {
    if (num < 0) return false; // Negative numbers cannot be perfect squares.

    int root = sqrt(num); // Find the integer part of the square root.
    
    // Check if the number is a perfect square and if the root is odd.
    return (root * root == num) && (root % 2 != 0);
}



int main(){

int t; ;
cin >> t ;
while(t--){


int n;
cin>> n;
int arr[n];
for(int i = 0 ; i  < n ; i ++ ){
    cin>> arr[i] ;
}

float sum = 0;
int happy = 0;

for(int i = 0 ; i <  n ; i ++){

    sum += arr[i] ;
if(isSquareOfOdd(sum)) happy++;



}

cout<< happy<<endl ;





}

    return  0 ;
}
