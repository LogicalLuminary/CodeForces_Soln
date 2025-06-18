#include<iostream>
using namespace std;

int main (){
int t;
cin >> t;
while(t--){

int n;
cin >> n;
int arra[n];
int arrb[n] ;


// taking input
for(int i =0; i< n ; i++){
    cin >> arra[i] ;
}
for(int i =0; i< n ; i++){
    cin >> arrb[i] ;
}


int ptra = 0;
int ptrb =0 ;
int ans =0;

while(ptrb <n){

    if(arra[ptra] <= arrb[ptrb]) {
        ptra++;
        ptrb++ ;
        
    }
    else{
        ptrb ++ ;
        ans++;
    }

}

cout << ans <<endl;


}



    return  0; 
}