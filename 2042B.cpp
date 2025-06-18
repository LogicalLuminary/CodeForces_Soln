#include<iostream>

using namespace std ;
int main(){

int t;
cin>> t;
while(t--){

int n;
cin>> n ;
int alicept = 0;
int bobpt = 0 ;


int arr1[n];
int arr2[n] = {0};
int arr3[n] = {0};

int alice[n] = {0};
int bob[n] ={0};

for(int i = 0; i< n  ; i++){
    cin>> arr1[i];
    arr2[arr1[i]-1]++ ;
}
for(int i = 0 ; i < n ;i++){
    arr3[i] = arr2[i] ;
    }



// int min = n+1 ;int minidx = -1;
// for(int i = 0 ; i < n ;i++){
//     if(arr2[i] < min && arr2[i]>0){
//         min = arr2[i];
//         minidx  = i ;
//     }
// }



for(int j = 0 ; j  < n ; j++){





if(j%2 == 0){// i.e alice tern

    int min = n+1 ;int minidx = -1;
    for(int i = 0 ; i < n ;i++){
        if(arr2[i] < min && arr2[i]>0 && alice[i]==0){
            min = arr2[i];
            minidx  = i ;
        }   
    }
    if(minidx == -1){

        int min2 = n+1 ;int minidx2 = -1;
        for(int i = 0 ; i < n ;i++){
            if(arr2[i] < min2 && arr2[i]>0){
                min2 = arr2[i];
                minidx2  = i ;
            }
        }
        arr2[minidx2]--;
        alice[minidx2]++;
    }
    else{
        if(arr3[minidx] == 1) {
            alicept+=2;
            alice[minidx]++;
            arr2[minidx]--;
        }
        else{
            alicept++;
            alice[minidx]++;
            arr2[minidx]--;
        }
    }


    
}

else{// bobs tern

    int min = n+1 ;int minidx = -1;
    for(int i = 0 ; i < n ;i++){
        if(arr2[i] < min && arr2[i]>0 && alice[i] ==0){
            min = arr2[i];
            minidx  = i ;
        }   
    }
if( minidx == -1){
        int min2 = n+1 ;int minidx2 = -1;
        for(int i = 0 ; i < n ;i++){
            if(arr2[i] < min2 && arr2[i]>0){
                min2 = arr2[i];
                minidx2  = i ;
            }
        }
        arr2[minidx2]--;
        bob[minidx2] ++ ;

}

else{
    arr2[minidx]-- ;
}


}


}
cout<<alicept<<endl ;

}


    return  0;
}