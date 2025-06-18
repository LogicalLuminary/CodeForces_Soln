#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
                
        ll n , d;
        cin >> n >> d ;

    bool dev1 = true;

    bool div3 = false;
    if(d%3 == 0){div3 = true;}
    else if(d%3 == 1){
        if(n>= 3) div3 = true;
    }
    else if(d%3 == 2){
        if(n>=3) div3 = true;
    }


    bool div5= false;
    if(d == 5) div5 = true;


    bool div7 = false;
    if(d == 7) div7 = true;
    else{
        if(n>=3) div7 = true;
    }

    bool div9 = false;
    if(d== 9) div9 = true;
    else{
        if(n>=6) div9 = true;
        else if( d== 3 || d==6){
            if(n>=3) div9 = true;
        }
    }

    cout<<1<<" ";
    if(div3) cout<<3<<" ";
    if(div5) cout<<5<<" ";
    if(div7) cout<<7<<" ";
    if(div9) cout<<9;;

cout<<endl;

 




    }

    return 0;
}