// #include<iostream>
// using namespace std ;


// int main(){

// int t;
// cin>> t;
// while(t--){

// string s;
// cin >> s ;


// for(int i =0 ;i<s.length() ; i++){
//     for(int j=0 ;j < s.length()-1 ; j++){
//         if(s.at(j+1) > s.at(j)+1 ){
//             s.at(j+1)-- ;
//             swap(s.at(j), s.at(j+1));
//         }

//     }
//        // cout<<s<<endl;
// }
// cout<<s<<endl ;

// }
//     return 0 ;
// }


#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
                
        string s;
        cin >> s;

        ll len = s.length() ;
        vector<int> vec(len);

        for(int i=0;i<len;i++){
            int max=-1;int maxj =-1;
            for(int j=i;j<i+10 &&j<len ; j++){
                if(s.at(j)-'0'-(j-i) > max) {
                    max =s.at(j)-'0'-(j-i);
                    maxj=j;
                };
            }  
            vec[i]= max;
            //cout<<maxj<<" ";
            // swap(s.at(i),s.at(maxj));
            rotate(s.begin()+i,s.begin()+maxj,s.begin()+maxj+1);
           // cout<<s<<endl;
        }
    for(auto &i : vec){
        cout<< i;
    }
cout<<endl;



    }

    return 0;
}