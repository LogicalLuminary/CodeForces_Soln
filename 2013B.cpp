// // #include<iostream>
// // using namespace std;
// // int main(){

// // int trials;
// // cin >> trials;
// // for(int i=0;i<trials;i++){

// //     int output;
// //     int n;
// //     cin >>n;
// //     int arr[n];
// //     for(int j=0;j<n;j++){
// //         cin>> arr[j];
// //     }


// //     int sumodd=0;
// //     for(int k=0;k<n;k+=2){
// //         sumodd+=arr[k];
// //     }

// //     int sumeven=0;
// //     for(int l=1;l<n;l+=2){
// //         sumeven+=arr[l];
// //     }

// // if(n%2!=0){
// //     cout<<sumodd -sumeven <<endl;
// // }
// // else 
// //     cout<< sumeven-sumodd<< endl;
// // }


// //     return 0;
// // }


// #include<iostream>


// using namespace std;

// int main(){

// int t;int h=0;
// cin >> t ;
// //cout<< t;
// while(t--){
//    /// cout<<"r1";
//     int n;
// h++;
//     cin>> n ;
//     int arr[n] ;
//     int max = 0;
//     int sum = 0 ;
//     int sumofneg = 0;
//     for(int i = 0 ; i  <  n ; i  ++){
//         cin>> arr[i];
//         //cout<<"i";
//         if(i != n-1){
//             if(arr[i]> max  && arr[i]>= 0) max  = arr[i];
//         }

//         if(arr[i] <0) sumofneg += arr[i];

//     }
// if(h == 873){
//     for(int i =0 ; i < n ;i ++){
//         cout<<arr[i];
//     }
//     continue;
// }

// for(int i = 0 ; i < n-1 ;i++){
//    if(arr[i] >=0) sum+= arr[i];
// }
// sum = sum - max;


// cout<< arr[n-1] - (max - sum) - sumofneg<<endl;
// // cout<<sum;
// // cout<<max;
// // if(max > sum ) {cout<< arr[n-1] - (sum-max) ;}

// // else{cout<< arr[n-1] - (max - sum) << endl ;

// // }


// // }
// }

//     return 0;
// }

#include<iostream>

using namespace std ;

int main(){

int t;
cin>> t;
while(t--){


long long int n;
cin >> n;
long long int arr[n]={0};

// int sumofpos = 0;
// int sumofneg =0 ;
long long int sum =0;
for(long long int i =0;i< n ;i++){
    cin >> arr[i];
    if(i != n-2) {
        sum+= arr[i];
    }
}
cout<<sum -arr[n-2]<< endl;

// for(int i= 0;i< n ;i ++){
//     if(arr[i]>= 0 ) sumofpos+=arr[i];
//     else if(arr[i]< 0 )sumofneg+= arr[i];
// }

}









    return 0;
}