// #include<iostream>

// using namespace std ;


// int func(int x, int y, int n,int arr[]){
//     int first = -1;
//     int len=0;
//     int at =-1;
//     for(int i=0;i<n;i++){// pehla x,y mese find kia hai
//         if(arr[i] == x ) {first = x;at = i;len++;break;}
//         else if(arr[i] == y) {first = y;at = i;len++;break;} 
//     }

//     if(len == 0) return 0;
//     //cout<<first<<" "<<len<<endl;

//     for(int i = 0;i<n;i++){
//         if(first == y){
//             if(arr[i] == y && (i !=at)) break;
//             if(arr[i] == x) {
//                 len++;
//                 first = x;
//                // cout<<len<<"reached1"<<endl;
//             }


//         }
//         else if(first == x){
//             if(arr[i] == x && (i!=at)) break;
//             if(arr[i] == y) {
//                 len++;
//                 first =y;
//             }
//         }
//     }

//     return len;

// }






// int main(){


// int n,m;
// cin>> n>>m;
// int arr[n];
// for(int i=0;i<n;i++){
//     cin>> arr[i] ; 
// }

// int sum = 0;

// for(int i = 1;i<=m;i++){
//     for(int j=i;j<=m;j++){
//         if(i<j){
//             sum += func(i,j,n,arr);
//         }
//     }
// }



// cout<<sum<<endl;

//     return 0;

// }









#include<iostream>

using namespace std ;


int func(int x, int y, int n,int arr[]){
    int first = -1;
    int len=0;
    int at =-1;
    for(int i=0;i<n;i++){// pehla x,y mese find kia hai
        if(arr[i] == x ) {first = x;at = i;len++;break;}
        else if(arr[i] == y) {first = y;at = i;len++;break;} 
    }

    if(len == 0) return 0;
    //cout<<first<<" "<<len<<endl;

    for(int i = 0;i<n;i++){
        if(first == y){
            //if(arr[i] == y && (i !=at)) break;
            if(arr[i] == x) {
                len++;
                first = x;
               // cout<<len<<"reached1"<<endl;
            }
        }

        else if(first == x){
           // if(arr[i] == x && (i!=at)) break;
            if(arr[i] == y) {
                len++;
                first =y;
            }
        }
    }

    return len;

}






int main(){


int n,m;
cin>> n>>m;
int arr[n];
for(int i=0;i<n;i++){
    cin>> arr[i] ; 
}

int sum = 0;

for(int i = 1;i<=m;i++){
    for(int j=i;j<=m;j++){
        if(i<j){
            sum += func(i,j,n,arr);
        }
    }
}



cout<<sum<<endl;

    return 0;

}


