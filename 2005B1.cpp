// // #include<iostream>
// // #include<cmath>
// // using namespace std ;

// // int main(){
// // int t;
// // cin >> t;
// // while(t--){

// //     int n;
// //     int m;
// //     int q;
// //     cin >> n>> m>> q ;
// //     int tchr1 , tchr2;
// //     cin >> tchr1 >> tchr2 ;
// //     int stu;
// //     cin >> stu ;
// // int moves = 0;
// //  int dist1=-1, dist2=-1 ;

// //     while(1){

       
// //     if(tchr1- stu >= 0){
// //         dist1 = (tchr1-stu) ;}
// //     else dist1 = stu - tchr1 ;

// //     if(tchr2- stu >= 0){
// //         dist2 = (tchr2-stu) ;}
// //     else dist2 = stu - tchr2 ;

// // //cout<<dist1<<" "<<dist2<<endl; ;

// //     if(dist1 == dist2){}
// //     else if(dist1 < dist2){
// //         if(tchr1 > stu && (stu!=1) ) {
            
// //             stu--;}

// //         if(tchr1<stu && (stu != n) ) {
// //             stu++;}
// //     }
// //     else if(dist1 > dist2){
// //         if(tchr2 > stu && (stu!=1)) {
// //             stu--;}
// //         if(tchr2<stu && (stu != n)) {
// //             stu++;}
// //     }


// //     if(tchr1- stu >= 0){
// //         dist1 = (tchr1-stu) ;}
// //     else dist1 = stu - tchr1 ;

// //     if(tchr2- stu >= 0){
// //         dist2 = (tchr2-stu) ;}
// //     else dist2 = stu - tchr2 ;

// // //cout<<dist1 << " "<<dist2 <<endl;
// //     if(tchr1 == stu || tchr2 == stu){
// //         break;
// //     }


    
// //     if(dist1 <= dist2){
// //         if(tchr1 > stu) {tchr1--;moves ++ ; }
// //         if(tchr1<stu ) {tchr1++;moves ++  ;}
// //     }
// //     else if(dist1 > dist2){
// //         if(tchr2 < stu ) {tchr2++;moves++ ;}
// //         if(tchr2 > stu ) {tchr2--;moves++ ;}
// //     }
// //     if(tchr1 == stu || tchr2 == stu){
// //         break;
// //     }



// //     }


// // cout<< moves<<endl ;


// // }

// //     return 0;
// // }

// #include<iostream>
// using namespace std; 

// int main(){

// int t;
// cin >> t;
// int p=0;
// while(t--){
// p++;

//     int n;
//     int m;
//     int q;
//     cin >> n>> m>> q ;
//     int tchr1 , tchr2;
//     cin >> tchr1 >> tchr2 ;
//     int stu;
//     cin >> stu ;
// int moves = 0;
//  int dist1=-1, dist2=-1 ;

// //if(p == 181) cout<< tchr1<<tchr2<<stu<<endl;
//     while(1){

       
//     if(tchr1- stu >= 0){
//         dist1 = (tchr1-stu) ;}
//     else dist1 = stu - tchr1 ;

//     if(tchr2- stu >= 0){
//         dist2 = (tchr2-stu) ;}
//     else dist2 = stu - tchr2 ;

// //cout<<dist1<<" "<<dist2<<endl; ;

//     if(dist1 == dist2){}
//     else if(dist1 < dist2){
//         if(tchr1 > stu && (stu!=1) ) {
            
//             stu--;}

//         if(tchr1<stu && (stu != n) ) {
//             stu++;}
//     }
//     else if(dist1 > dist2){
//         if(tchr2 > stu && (stu!=1)) {
//             stu--;}
//         if(tchr2<stu && (stu != n)) {
//             stu++;}
//     }


//     if(tchr1- stu >= 0){
//         dist1 = (tchr1-stu) ;}
//     else dist1 = stu - tchr1 ;

//     if(tchr2- stu >= 0){
//         dist2 = (tchr2-stu) ;}
//     else dist2 = stu - tchr2 ;

// //cout<<dist1 << " "<<dist2 <<endl;
//     if(tchr1 == stu || tchr2 == stu){
//         break;
//     }

//         if(tchr1 > stu && tchr2 > stu) {tchr1--; tchr2--;moves ++ ; }
//         if(tchr1 <stu && tchr2 >stu) {tchr1++;tchr2-- ;moves ++  ;}
//         if(tchr2 < stu && tchr1>stu) {tchr2++;tchr1-- ;moves++ ;}
//         if(tchr2 < stu && tchr1< stu) {tchr2++;tchr1 ++;moves++ ;}
    
//     if(tchr1 == stu || tchr2 == stu){
//         break;
//     }



//     }


// cout<< moves<<endl ;


// }


//     return 0;
// }








#include<iostream>
using namespace std; 

int main(){

int t;
cin >> t;
int p=0;
while(t--){
p++;

   long long int n;
   long long int m;
   long long int q;
    cin >> n>> m>> q ;
   long long int tchr1 , tchr2;
    cin >> tchr1 >> tchr2 ;
  long long  int stu;
    cin >> stu ;
long long int moves = 0;
long long int dist1=-1, dist2=-1 ;


    
    if(tchr1- stu >= 0){
        dist1 = (tchr1-stu) ;}
    else dist1 = stu - tchr1 ;

    if(tchr2- stu >= 0){
        dist2 = (tchr2-stu) ;}
    else dist2 = stu - tchr2 ;






    if(tchr1 > stu && tchr2 > stu) {
        if(tchr1>tchr2) cout<< tchr2 -1;
        else if(tchr1<=tchr2) cout<< tchr1-1;
        }

   
   else if(tchr2 < stu && tchr1< stu) {
        if(tchr1>tchr2) cout<< n -tchr1;
        else if(tchr1<=tchr2) cout<< n-tchr2;

    } 
    else{

        if(tchr1- stu >= 0){
            dist1 = (tchr1-stu) ;}
        else dist1 = stu - tchr1 ;

        if(tchr2- stu >= 0){
            dist2 = (tchr2-stu) ;}
        else dist2 = stu - tchr2 ;

        if(dist1 == dist2){
            cout<<dist1;
        }
        else{

        if(dist1 > dist2){
            if((dist1-dist2) % 2 == 0 )
            cout<< (dist1-dist2)/2  + dist2;
            else cout<< (dist1-dist2)/2 + dist2  ;
        }
        else {
            if((dist1-dist2) % 2 == 0 )
            cout<< (dist2-dist1)/2  + dist1;
            else
            cout<< (dist2-dist1)/2 + dist1 ;
        }
        }
    }

cout<<endl;


 
//cout<< moves<<endl ;


}

return 0;
}