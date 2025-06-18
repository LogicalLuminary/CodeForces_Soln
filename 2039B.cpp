#include<iostream>
using namespace std;

 
int main(){
int t;
cin>> t;
while(t--){
    string s;
    cin >>s ;
 
    if(s.length() == 1) {
        cout<< -1 <<endl;
        continue;
    }
    else if(s.length() == 2 && (s.at(0) != s.at(1))){
        cout<< -1 <<endl;
        continue;
    }
        else if(s.length() == 2 && (s.at(0) == s.at(1))){
        cout<< s.at(0)<<s.at(1) <<endl;
        continue;
    }
    int isalt =1;
    for(int i=0; i<s.length()-2 ; i++){
        if((s[i] != s[i+2]) ) {isalt=0;break;}
        if(s[i] == s[i+1]){isalt=0;break;}
    }
    if(isalt == 1){
        cout<<-1<<endl;
        continue;
    }


string ans(3,'\0');int two=0;
for(int i=0; i<s.length()-1; i++){
    if(s.at(i) == s.at(i+1)) {
        ans.at(0) = s.at(i);
        ans.at(1)= s.at(i+1);
        two =1;
 
        break;
    }

    else if(i<s.length()-2){
         if((s.at(i) != s.at(i+1)) && (s.at(i+1) != s.at(i+2)) &&(s.at(i) != s.at(i+2))){
        ans.at(0) = s.at(i);
        ans.at(1)= s.at(i+1);
        ans.at(2) = s.at(i+2);
        break;
    }
    }
 
}
if(two ==1) cout<<ans[0]<<ans[1]<<endl;
else if(two == -1) cout<<ans[0]<<ans[1]<<endl;
else cout<<ans<<endl;
 
}
 
 
 
 
 
 
 
 
 
    return 0;
}