#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
                
        string s;
        cin >> s;

        ll pos =0, prev0 = -1,ans=0;
        while(pos<s.length()){
            if(pos == 0){
                while( pos<s.length() && s.at(pos) == '0'){
                    prev0 = pos;
                    pos++; 
                }
                
            }
            if(pos == s.length()) break;
            //cout<<"a";
            if(s.at(pos) == '1'){
                pos++;
            }

            else if(s.at(pos) == '0'){
                ans += pos-prev0;
                prev0 ++;;
                pos++;
            }
           // cout<<pos<<" ";

        }
    cout<<ans<<endl;




    }

    return 0;
}