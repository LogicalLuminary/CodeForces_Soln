// #include<iostream>
// using namespace std;
// int main(){

// int r; int c;
// // cout<<"Enter r: ";
// // cin>>r;
// cout<<"Enter c: ";
// cin>>c;

// int arr[4][5];
// for(int i=0;i<r;i++){
//     for(int j=0;j<c;j++){
//         cout<<"Enter "<<i+1<<","<<j+1<< "element:";
//         cin>>(arr[i][j]);
//     }
// }
// cout<<"Your matrix is "<<endl;
// for(int i=0;i<r;i++){
//     for(int j=0;j<c;j++){
//         cout<< (arr[i][j]);
//     }
//     cout<<endl;
// }

// // FIND TRANSPOSE OF ARRAY
// int arr2[r][c];
// for(int i=0;i<r;i++){
//     for(int j=0;j<c;j++){
//         arr2[i][j]=arr[i][j];
//     }
// }

// cout<<"THE TRANSPOSE IS"<<endl;

// for(int i=0;i<c;i++){
//     for(int j=0;j<r;j++){
//         arr[i][j]=arr2[j][i];
//     }
// }

// for (int i=0;i<c;i++){
//     for(int j=0;j<r;j++){
//         cout<< ( arr2[i][j]);
//     }
//     cout<<endl;
// }


// Not working


//}}


#include<iostream>
using namespace std;


// int power(int k,int p){
//     int pow=1;

//     for(int i=0;i<p;i++){
//         pow*=k ;
//     }
//     return pow;
// }

int power(int a, int b) {
    int result = 1;
    while (b > 0) {
        if (b % 2 == 1) {   // If b is odd, multiply a with result
            result *= a;
        }
        a *= a;  // Square the base
        b /= 2;  // Divide the exponent by 2
    }
    return result;
}













int sub(int n, int k){
    int i=0;
    while (n-power(k,i)>=0){
        i++;
    }

    return power(k,i-1);
}



int main(){


int trials;
cin >>trials;
int n;

int k;


int i=0;



for(int i=1;i<=trials;i++){
    int ans=0;
    cin>>n;
    cin>> k;
    while(n>0){
        n=n-sub(n,k);
        ans++;
    }
    cout<< ans<<endl;

}





return 0;
}