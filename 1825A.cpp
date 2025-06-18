#include<iostream>
using namespace std;

int main(){
int t;
cin >>t ;
while(t--){
        string s;
        cin >> s;

       char ch = s.at(0);bool isaaa= true;
       for(int i=0;i<s.length(); i++){
        if(s.at(i) != ch){
           isaaa= false;
            break;
        }
       }
       if(isaaa){
        cout<<-1<<endl;
        continue;
       }
       else{
        cout<<s.length()-1 <<endl;
       }


}

    return 0;
}