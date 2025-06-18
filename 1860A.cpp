#include<iostream>
#include<vector>
using namespace std;

bool isalt(string v1){
    char c =v1[0];
    char c2 = v1[1];
    if(c == c2) return 0;
    for(int i=0;i <v1.size() ;i++){
        if(i%2 == 0){
            if(v1[i] == c) continue;
            else return 0;
        }
        else{
            if(v1[i] == c2) continue;
            else return 0;
        }
    }
    return 1;
}


int main(){
    int t; cin >> t;
    while(t--){

string s;
cin >>s;
int len = s.length();


if(len == 1){
    cout<<"No\n";
    continue;
}
if(len == 2){
    if(s[0] == '(' && s[1] == ')') {
        cout<<"NO\n";
        continue;
    }
}



// string s2;
// if(isalt(s)){
//     for(int i=0;i<len;i++){
//         s2[i] = '(';
//         s2[2*len-1-i] =')' ;
//     }
// }
// else{
//     for(int i=0;i<2*len;i++){
//         if(i%2 == 0) s2[i]='(';
//         else s2[i]=')';
//     }
// }

        string s2;
        if (isalt(s)) {
            s2 = string(len, '(') + string(len, ')');
        } else {
            for (int i = 0; i < 2 * len; i++) {
                if (i % 2 == 0)
                    s2 += '(';
                else
                    s2 += ')';
            }
        }




cout<<"YES\n";
cout<<s2<<endl;

}

    return 0;
}