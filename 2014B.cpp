// #include<iostream>

// using namespace std ;

// int main(){
//     int t;
//     cin>> t;
//     while(t--){

//         int n,k;
//         cin>> n>> k;

//     //n, n-1, n-2....n-k+1 tak lena hai;
//     int sum= 0 ;
//     for(int i=n;i>=n-k+1;i--){
//         if(i%2 == 1){
//             sum+= 1;
//         }
//     }
//     if(sum %2 ==0)cout<<"YES\n";
//     else cout<<"NO\n";


//     }
//     return 0 ;
// }







#include<iostream>

using namespace std ;

int main(){
    int t;
    cin>> t;
    while(t--){

        int n,k;
        cin>> n>> k;

    //n, n-1, n-2....n-k+1 tak lena hai;
    // int sum= 0 ;
    // for(int i=n;i>=n-k+1;i--){
    //     if(i%2 == 1){
    //         sum+= 1;
    //     }
    // }
    // if(sum %2 ==0)cout<<"YES\n";
    // else cout<<"NO\n";

    if(k%4 == 1 ){
        n%2? cout<<"NO\n" :cout<<"YES\n";}
    else if(k%4 == 3){
        n%2 ?cout<<"YES\n" : cout<<"NO\n" ;
    }
    
    else if(k%4 == 2) {
       cout<<"NO\n" ;
    }
    else{
        cout<<"YES\n";
    }



    }
    return 0 ;
}