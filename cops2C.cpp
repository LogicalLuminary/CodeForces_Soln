#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
                
        ll n;
        cin >>n;
        string s;
        cin >> s;

        vector<char> a;
        vector<char> b;
int temp=0;
        for(int i=0;i<s.length(); i++){
            if(s.at(i) == '0'){
            a.push_back('0');
            b.push_back('0');
            }
            else if(s.at(i) == '1'){
                if(temp == 0){
                    a.push_back('1');
                    b.push_back('0');
                    temp++;
                }
                else{
                    a.push_back('0');
                    b.push_back('1');                   
                }
            }
            else{
                if(temp ==0){
                    a.push_back('1');
                    b.push_back('1');
                    
                }
                else{
                    a.push_back('0');
                    b.push_back('2');                    
                }
            }
        }

    for(auto i:a){
        cout<<i;
    }
    cout<<endl;
    for(auto i:b){
        cout<<i;
    }
    cout<<endl;





    }

    return 0;
}