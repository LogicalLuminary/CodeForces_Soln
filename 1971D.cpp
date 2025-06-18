#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
                
        string s;

        cin >> s;

        bool  is01 = false;
        ll spotof0 = 0;
        char now='1' ;
        bool is1 = false;
        bool is0 = false;
        for(int i=0; i< s.length() ; i++){
            if(s.at(i) == '0' && now == '1') {
                spotof0 ++;
                now ='0';
            }
            else {
                now = s.at(i);
            }
                if((s.at(i) == '0')&&(i<s.length()-1 )&&( s.at(i+1) == '1')) {
                    is01 = true;
                }   
            if(s.at(i)== '1') is1 =true; 
            if(s.at(i)== '0') is0 = true;

        }

        if(s.at(0) == '0') spotof0 -- ;

   //     cout<< spotof0<<endl<<is01;

if(is1 == false || is0 == false){
    cout<<1<<endl; continue;
}


ll piece= 1;
piece += 2*spotof0;
if(s.at(0) == '0') ;
else piece -= is01;

if(s.at(s.length()-1) == '0') piece--;
cout<<piece<<endl;


    }

    return 0;
}