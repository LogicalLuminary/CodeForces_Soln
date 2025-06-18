#include<iostream>
using namespace std;

int main(){

int t;
cin >> t;
while(t--){



long long int n;
long long int m;
cin >> n >> m;
string s[n];
//long long int left =m;
//long long int ans =0;
for(int i= 0; i< n; i ++ ){
    cin >> s[i] ;
}
long long int len =0;
long long int i= 0;
while(len< m){

    if(s[i]. length() <= m-len){len += (s[i].length()) ;
    i++;}
    else break;
}
//cout<<s[0].length()<<left;
// for(int i= 0; i< m ; i++){
//     if(s[i].length() <= left ){
//         ans++ ;
//         left -=(s[i].length()) ;
//     }
//     else{
//         break ;
//     }
//     if(left<=0) break ;
// }


cout<<i<<endl;

}



    return 0;
}