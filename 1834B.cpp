#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>> t;
int i=1;
    while(t--){


    string s1,s2;
    cin >> s1>>s2 ;
        //     if(i == 212){
        //     cout<<s1<<s2;
        // }
    int s1l =s1.length();
    int s2l =s2.length();
    if(s1.length() ==s2.length()){

        int posofdiff=-1;int ans =0;
        for(int i=0;i<s1.length(); i++){
            if(s1.at(i) != s2.at(i)){
                posofdiff = i;
                ans = abs(s1.at(i) - s2.at(i)) ;
                break ;
            }

        }
        if(posofdiff == -1){posofdiff = s1.length()-1;}
        ans  += 9*(s1.length()-1-posofdiff) ;
        cout<< ans<<endl;
    }
    else{
        //cout<<s1.length();//-s2.length()<<endl;;
        //cout<<abs((s1l-s2l));

        int ans = 9*max(s1l,s2l)-9;
        // for(int i=0;i<abs(s1l- s2l) ;i++){
        //    if(s1.length() > s2.length()){
        //     ans += (s1.at(i)-'0');
        //    }
        //    else{
        //     //cout<<i<<endl;
        //     ans += (s2.at(i)-'0');
        //    }
        // }
       // cout<<ans;
        if(s1l>s2l)
        ans += s1.at(0)-'0';
        else ans += s2.at(0)-'0';

       cout<<ans<<endl;


    }
    i++;

    }



    return 0;
}