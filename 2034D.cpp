// #include<iostream>

// using namespace std ;


// int main(){
// int t;
// cin >> t;
// while(t--){


// int n;
// cin>> n;
// int arr[n];
// int arr4[n];
// for(int i=0;i<n;i++){
//     cin>> arr[i];
//     cin>> arr4[i] ;
// }



// int temp =-1;
// int ptr1 = 1;
// int ptr2 = n;
// int moves =0;

// int idx = 0;
// int arr2[n]= {0};
// int arr3[n]={0};
// bool sort = true ;
// for(int i = 0;i<n;i++){
//     arr2[i]= - 1;
//     arr3[i] = -1;
// }
// while(1){
//     temp = ptr1;
//    // cout<<"r";
//     while(arr[ptr1-1] == 0 && ptr1<=n){
//        //cout<<"x";
//         ptr1++;
//     }

//     if(arr[ptr1-1] == 2){

//         while(arr[ptr2-1] != 1 && ptr2>=1){
//             ptr2-- ;
//         }
        

//        if(ptr1<ptr2) 
//        {arr[ptr1-1] =1;
//         arr[ptr2-1]= 2;
//        // cout<<ptr1<<" "<<ptr2<<endl ;
//         arr2[idx] = ptr1 ;
//         arr3[idx]= ptr2 ; 
//         idx++;
        
//         moves++;
//             }

//     }
//     else if(arr[ptr1-1] == 1 && ptr1<=n){

//         while(arr[ptr2-1] != 0 && ptr2 >=1){
//             ptr2--;
//         }
        

//        if(ptr1<ptr2)
//        { arr[ptr1-1] = 0;
//          arr[ptr2-1] = 1;
//         // cout<<ptr1<<" "<<ptr2 <<endl ;
//         arr2[idx] = ptr1 ;
//         arr3[idx]= ptr2 ;
         
//         idx++;
//         moves++;
        
//         }
//     }

//     for(int i=0;i<n-1;i++){
//        if( arr[i] >arr[i+1]) sort = false;;

//     }
//     for(int j =0 ;j<n ;j++){
//         cout<<arr[j]<<" ";
//     }
//     cout<<endl;

//     //if(sort == true) break ;
//      break;
   


// }

// cout<<moves<<endl ;

// // for(int i = 0;i< moves;i++){
// //     cout<< arr2[i] << " "<<arr3[i]<<endl; ;
// // }




// }


//     return 0;
// }



// #include<iostream>

// using namespace std ;


// int main(){
// int t;
// cin >> t;
// while(t--){


// int n;
// cin>> n;
// int arr[n];
// for(int i=0;i<n;i++){
//     cin>> arr[i];
// }




// int ptr1 = 1;
// int ptr2 = n;
// int moves =0;

// int idx = 0;
// int arr2[n]= {0};
// int arr3[n]={0};
// bool sort = true ;
// for(int i = 0;i<n;i++){
//     arr2[i]= - 1;
//     arr3[i] = -1;
// }
// while(1){

//     while(arr[ptr1-1] == 0 && ptr1<=n){
//         ptr1++;
//     }
//     if(arr[ptr1-1] == 2){

//         while(arr[ptr2-1] != 1 && ptr2>=1){
//             ptr2-- ;
//         }
//         arr[ptr1-1] =1;
//         arr[ptr2-1]= 2;

//        if(ptr1<ptr2) 
//        {arr[ptr1-1] =1;
//         arr[ptr2-1]= 2;
//        // cout<<ptr1<<" "<<ptr2<<endl ;
//         arr2[idx] = ptr1 ;
//         arr3[idx]= ptr2 ; 
//         idx++;

//         moves++;
//             }

//     }
//     else if(arr[ptr1-1] == 1 && ptr1<=n){

//         while(arr[ptr2-1] != 0 && ptr2 >=1){
//             ptr2--;
//         }
       

//        if(ptr1<ptr2)
//        { 
//         arr[ptr1-1] = 0;
//         arr[ptr2-1] = 1;
//         // cout<<ptr1<<" "<<ptr2 <<endl ;
//         arr2[idx] = ptr1 ;
//         arr3[idx]= ptr2 ; 
//         idx++;
//         moves++;
        
//         }
//     }
//      for(int j=0 ;j<n;j++){
//         cout<<arr[j]<<" ";
//     }
//     cout<<endl ;
//     for(int i=0;i<n-1;i++){
//        if( arr[i] >arr[i+1]) sort = false;;

//     }
//     if(sort ==  true ) break ;
    

   

// }

// cout<<moves<<endl ;

// for(int i = 0;i< moves;i++){
//     cout<< arr2[i] << " "<<arr3[i]<<endl; ;
// }


// }


//     return 0;
// }