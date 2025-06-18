#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){


    string s;
    cin >> s;

    int sum =0;
int is3 =0; int is2 =0;
for(int i=0 ;i < s.length() ;i++){
    if((s.at(i) - '0') == 2) is2 ++;
    if((s.at(i) - '0') == 3) is3 ++ ;

    sum += (s.at(i) - '0');
}
int ans= 0;
//cout<<is2<<is3;

if(sum%9 == 0){
   ans =1;
}
else{
    for(int i= 0;i<= min(is3,9) ; i++){
        for(int j= 0;j<= min(is2,9) ;j++ ) {
           if((sum+j*2 +6*i)%9 == 0){
            ans =1;
           }
        }
    }
}

if(ans ==1) cout<<"YES\n";
else cout<<"NO\n";







// }
// else if(sum%9 == 7  && is2){
//     cout<<"YES\n" ;
// }
// else if(sum%9 == 3 && is3){
//     cout<<"YES\n";
    
// }
// else if(sum%9 == 6 && is3 >= 2){
//     cout<<"YES\n";
// }
// else if(sum%9 == 5 && is2>=2){
//     cout<<"YES\n" ;
// }
// else if(sum%9 == 3 && is2 >=3){
//       cout<<"YES\n" ;
// }
// else if(sum% 9 == 1 && is2 >= 4){
//         cout<<"YES\n" ;
// } 
// elseif(sum%9 == 8 && )
// else {
//     cout<<"NO\n";
// }




}








    return 0;
}