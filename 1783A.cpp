#include<iostream>
using namespace std ;

void swap(int* a, int* b){
    int temp = *a;
    *a=*b;
    *b= temp;
}



int main(){

int t;
cin >> t;
while(t--){


int n;
cin>> n;
int arr[n];
int sumarr[n];
int uglyidx[n]={0};


    for(int i =0;i<n;i++){
        cin >> arr[i] ;
        }

    sumarr[0] = 0;

for(int i = 0 ; i < n ; i++){
   if( i != 0 ) sumarr[i] =  sumarr[i-1] + arr[i-1];

}

bool no = false;// case of already beautiful

int ugly = 0;
for(int i =0; i<n ;i++){
    if(sumarr[i] == arr[i]) {// also store idx of ugliness
        no = true;
        ugly ++ ;
        uglyidx[i] = 1;
    }
}

// if(no == false){
//     cout<< "YES\n" ;
//     for(int i = 0 ; i<n; i++){
//         cout<<arr[i]<<" " ;
//     }
// }


int arrofugly[ugly];
int j=0;
for(int i=0;i<n ;i++){
    if(uglyidx[i] ==1 ){
        arrofugly[j] = i;
        j++ ;
    } 
}
//cout<<ugly;
//cout<<arrofugly[0];

if(ugly%2 == 0){
for(int i = 0 ; i < ugly/2 ; i += 2){
    swap(&arr[arrofugly[i]],&arr[arrofugly[i+1]]) ;
}
}
else if(ugly == 1){

    for(int i=0;i<n;i++){
        if(arr[arrofugly[0]] != arr[i]) {
            swap(&arr[arrofugly[0]] , &arr[i]);
            break;
        }
    }



}
else if(ugly%2 == 1 && ugly >=3){
    for(int i = 0 ; i < ugly/2 -1; i += 2){
        swap(&arr[arrofugly[i]],&arr[arrofugly[i+1]]) ;
    }
   int temp1 =arr[arrofugly[ugly-1]];
   int temp2 =arr[arrofugly[ugly-2]];
    arr[arrofugly[ugly-1]]=arr[arrofugly[ugly-3]];
    arr[arrofugly[ugly-2]]=temp1;
    arr[arrofugly[ugly-3]]=temp2;
    //swap(&arr[arrofugly[ugly-1]], &arr[arrofugly[ugly-2]]) ;
    // swap(&arr[arrofugly[ugly-1]], &arr[arrofugly[ugly-2]]) ;

}

for(int i = 0 ; i < n ; i++){
   if( i != 0 ) sumarr[i] =  sumarr[i-1] + arr[i-1];

}

int ugly2 = 0;
for(int i =0; i<n ;i++){
    if(sumarr[i] == arr[i]) {// also store idx of ugliness
        //no = true;
        ugly2 ++ ;
        //uglyidx[i] = 1;
    }
}

for(int i=0;i<n;i++){
    cout<<sumarr[i]<<"  "<<arr[i]<<endl;
}


if(ugly2>0){
    cout<<"NO\n" ;
}
else{
    cout<<"YES\n";
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

}

}

    return  0; 
}