#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){


    string s;
    string t;
    cin >> s >> t;
    int qmark = 0;
    for(int i= 0; i< s.length() ; i++){
        if(s.at(i) == '?') qmark++;
    }
    int lent=t.length();
    int lens = s.length() ;

int ptr =0;int done =0;
int ptr2=0;
    for(int i =0 ; i< lens ;i++){

        if(s.at(ptr) == t.at(ptr2)){
           // cout<<"if"<<endl;
            ptr++;done++;ptr2++;
        }
        else if(s.at(ptr) == '?'){
           // cout<<"elseif"<<endl;
            s.at(ptr) = t.at(ptr2);
            ptr++;done++;ptr2++;
        }
        else{
           // cout<<"eles"<<endl;
            ptr++;

        }
        if(ptr2>= lent || ((ptr)>= lens)){
            break;
        }
        
}


//cout<< done;
for(int i =0 ; i<lens ;i++){
    if(s.at(i) == '?') s.at(i) = 'o';
}
if(done == lent) {
    cout<<"YES\n"<<s<<endl;
}
else{
    cout<< "NO\n" ;
}



    }

    return  0;
}