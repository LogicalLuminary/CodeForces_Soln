#include<iostream>

using namespace std;

int main(){
    int t;
    cin >>t ;
    while(t--){

    int n;
    cin >> n ;
    string s ;
    cin >> s ;int lpresent=0,rpresent =0;
    for(int i=0 ;i < s.length() ;i++){
        if(s.at(i) == '(' ) lpresent++;
        if(s.at(i) == ')') rpresent++;
    }
    int lreq = s.length()/2 - lpresent;
    int rreq =s.length()/2 - rpresent ;

    
    int done =0;
    for(int i= 0; i< s.length() ; i++){
        if(s.at(i) == '_'){
            if(i == 0){ s.at(i) ='(' ;
                lreq--;}
            else if(s.at(i-1) == '('){
                s.at(i) =')';
                rreq--;
            }
            else if(s.at(i+1) ==')'){
                s.at(i) = '(';
                lreq--;
            }
            
        }

    }


// for(int i=0;i<n;i++){
//     if(s.at(i) == '_' && lreq==1){
//         s.at(i)='(';
//     }
//     if(s.at(i) =='_' && rreq == 1){
//         s.at(i) =')';
//     }
// }
int left=0;
for(int i= 0; i< s.length() ; i++){
    if(s.at(i) == '(') left++;
    else if(s.at(i) == ')') left--;
    else if(s.at(i) == '_'){  
        if(left == 0){
         s.at(i) = '(' ;left++;
        }
        else{
            s.at(i) =')';
            left--;
        }
    }
    

}


//cout<<s<<endl;

int price =0;int l= 0;
for(int i=0; i< s.length() ; i ++){
    
    if(s.at(i) == '('){
        price+= (l*2);
        l++;
    }
    else if(s.at(i) == ')'){
        price += 1;
        l--;
    }

}
cout<<price<<endl ;
    }

    return  0;
}