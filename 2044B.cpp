#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
                
        string s;
        cin >> s;
        //reverse(s.begin(), s.end());
        for(int i=0;i<s.length();i++){
            if(s.at(i) == 'q') {s[i] = 'p';}
            else if(s.at(i) == 'p') s.at(i) = 'q';
        }
        reverse(s.begin(), s.end());
cout<<s<<endl;




    }

    return 0;
}