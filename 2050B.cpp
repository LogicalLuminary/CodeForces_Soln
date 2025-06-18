#include<iostream>
#include<cmath>
using namespace std;


int isInteger(double x) {
    double intPart;
    double fracPart = modf(x, &intPart); // Separate fractional and integer parts
    return (fracPart == 0.0) ? 1 : 0;   // Return 1 if fractional part is 0
}

int main(){

int t;
cin >> t;
while(t--){


int n;
cin >> n;

int arr[n];
for(int i =0 ;i< n; i++){
    cin >> arr[i] ;
}

float alt1=0;
float alt2 =0;
int numb1forodd = n/2+1;
int numb2= n/2 ;
for(int i =0 ;i< n; i+=2){
    alt1+= arr[i];
}
for(int i =1; i<n; i+=2){
    alt2 += arr[i] ;
}
int x= 0;
//cout<<alt1<<" "<<alt2 ;

if(n%2 == 1){
    if((alt1)/numb1forodd == alt2/numb2 ){
       if(isInteger(isInteger(alt1/numb1forodd)) && isInteger(alt2/numb2))
            x=1;
    }
}


else{
    if(alt1/numb2  == alt2/numb2 ){
        if(isInteger(alt1/numb2) && isInteger(alt2/numb2)){
            x =1 ;
        }
    }
}

if(x == 0) cout<<"NO\n" ;
else cout<<"YES\n";

}




    return 0;
}