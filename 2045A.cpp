// #include<iostream>
// #include<string>

// using namespace std ;
// int main(){

// string s;
// cin>> s;
// int y=0;
// int v = 0;

// int ng= 0;
// for(int i=0;i<s.length()-1;i++){
//     if(s.at(i) =='N' && s.at(i+1)=='G') ng++;
// }

// for(int i=0;i<s.length();i++){
//     if(s.at(i) == 'Y') y++;
//     else if(s.at(i) == 'A' ||s.at(i) == 'E' ||s.at(i) == 'I' ||s.at(i) == 'O' ||s.at(i) == 'U' )
//     {
//         v++;
//     }

// }
// //cout<<y;

// int l = s.length() - y;
// int c = l - v;
// int triplets = 0;
// int max = 0 ;
// int maxng = 0;

// for(int i=0;i<= ng;i++){



// if(2*v == c) {
//     triplets  = v + y/3 ;
// }
// else if(2*v < c){
//     triplets = v;
//     int leftc = l - 3*v ;

//     if(2*y <= leftc) {triplets+= y ;}
//     else if(2*y> leftc) triplets+= leftc/2;
// }


// else{
//     triplets = c/2;
//     int leftv = l - 3*(c/2);
//     if(2*leftv<= y) triplets+= leftv ;
//     else if(2*leftv > y) triplets += y/2 ;
// }
//     triplets*=3;
//     if(triplets>=max){
//         max = triplets ;
//         maxng = i;
//     }
//     l--;
//     c=l-v;
// }
// cout<<max+maxng<<endl ;;



//     return 0 ;
// }





// #include<iostream>
// #include<string>

// using namespace std ;
// int main(){

// string s;
// cin>> s;
// int y=0;
// int v = 0;

// int ng= 0;
// for(int i=0;i<s.length()-1;i++){
//     if(s.at(i) =='N' && s.at(i+1)=='G') ng++;
// }

// for(int i=0;i<s.length();i++){
//     if(s.at(i) == 'Y') y++;
//     else if(s.at(i) == 'A' ||s.at(i) == 'E' ||s.at(i) == 'I' ||s.at(i) == 'O' ||s.at(i) == 'U' )
//     {
//         v++;
//     }

// }
// //cout<<y;

// int l = s.length() - y;
// int c = l - v;
// int triplets = 0;
// int max = 0 ;
// int maxng = 0;


// for(int i=0;i<= ng;i++){



// if(2*v == c) {
//     triplets  = v + y/3 ;
// }
// else if(2*v < c){
//     triplets = v;
//     int leftc = l - 3*v ;

//     if(2*y <= leftc) {triplets+= y ;}
//     else if(2*y> leftc) triplets+= leftc/2;
// }


// else{
//     triplets = c/2;
//     int leftv = l - 3*(c/2);
//     if(2*leftv<= y) triplets+= leftv ;
//     else if(2*leftv > y) triplets += y/2 ;
// }
//     triplets*=3;
//     if(triplets>=max){
//         max = triplets ;
//         maxng = i;
//     }
//     l--;
//     c=l-v;
// }
// cout<<max+maxng<<endl ;;



//     return 0 ;
// }




/*
    
*/


#include<iostream>
#include<string>

using namespace std ;
int main(){

string s;
cin>> s;
int y=0;
int v = 0;

int n= 0;
int g= 0;
for(int i=0;i<s.length();i++){
    if(s.at(i) =='N') n++;
    else if (s.at(i) == 'G') g++;
}
int ng = min(n,g);

for(int i=0;i<s.length();i++){
    if(s.at(i) == 'Y') y++;
    else if(s.at(i) == 'A' ||s.at(i) == 'E' ||s.at(i) == 'I' ||s.at(i) == 'O' ||s.at(i) == 'U' )
    {
        v ++;
    }

}

//cout<<y;
int v2 =v;
int l = s.length() ;
int c = l - v;
int triplets = 0;
int max = 0 ;
int maxng = 0;
int ans = -1;

if(c-y == l){
    cout<< 0<<endl ;
    return 0;
}

for(int j = 0;j<= y ; j++){

l =s.length() - j;
v =v2+j;
c = l-v;

for(int i=0;i<= ng;i++){

if(2*v == c) {
    triplets  = v  ;
}
else if(2*v < c){
    triplets = v;
//     int leftc = l - 3*v ;

//     if(2*y <= leftc) {triplets+= y ;}
//     else if(2*y> leftc) triplets+= leftc/2;
// }
}

else{
    triplets = c/2;
    // int leftv = l - 3*(c/2);
    // if(2*leftv<= y) triplets+= leftv ;
    // else if(2*leftv > y) triplets += y/2 ;
}
    triplets*=3;
    //cout<<triplets<<endl;
    cout<<c<<" "<< v <<endl;;
    if(triplets>=max){
        max = triplets ;
        maxng = i;
    }

    l--;
    c=l-v;
  //  cout<<"a";
if(max > ans){
    ans  = max  ;
    }
    //cout<<ans <<endl;
}


 //cout<<ans<<endl ;;

}



 cout<< ans + maxng<<endl;
    return 0 ;
}




// #include<iostream>
// using namespace std;

// int main(){


// string s;
// cin>> s;
// int y=0;
// int v = 0;

// int n= 0;
// int g= 0;
// for(int i=0;i<s.length();i++){
//     if(s.at(i) =='N') n++;
//     else if (s.at(i) == 'G') g++;
// }
// int ng = min(n,g);









// }