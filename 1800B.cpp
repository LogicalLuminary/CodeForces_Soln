#include<iostream>
#include<string>
using namespace std ;
int main(){
int t;
cin >> t;
while(t--){

int n , k ;
cin >> n >> k ;
string s ;
cin >> s ; 
int arr1[26]={0};
int arr2[26]={0};
//int i=0;
for(int i=0;i <s.length() ; i++){
    if(s.at(i) >= 'a') {arr1[ (s.at(i)-'a' ) ]++;}
    else {arr2[s.at(i) - 'A']++ ;}  ;

}



int sum = 0;
for(int i= 0; i<26; i++){
    int mini =  min(arr1[i] , arr2[i]) ;
    sum += min(arr1[i] , arr2[i]) ;

   arr1[i]= arr1[i] -mini ;
   arr2[i] = arr2[i] - mini ;

}
//cout<<sum;

int left = 0 ;
//cout<<arr1[3]<<arr2[3];
for(int i= 0 ; i < 26 ; i++){
   if(((arr1[i] + arr2[i])/2)) {
    left += ((arr1[i] + arr2[i])/2) ;
   // cout<<i<<endl;
   }
}

//cout<<left<<endl;
if( left >= k ) sum += k ;
else sum += left ;

cout << sum <<endl ;



}



    return 0 ;
}