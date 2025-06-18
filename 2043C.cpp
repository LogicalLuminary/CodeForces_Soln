#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
                
        ll n;
        cin >> n ;

    vector<ll> vec(n);
    ll countneg1 = 0;ll count1= 0;
    ll num=0;
    for(ll i = 0; i< n ;i++){
        cin >> vec[i] ;
        if(vec[i] == 1)count1++;
        else if(vec[i] == -1) countneg1++;
        else num = vec[i];
    }
    set<ll> set1;
    
    for(int i=1; i<= countneg1 ; i++){
        set1.insert(-countneg1+i-1);
        set1.insert(num-countneg1+i-1);
    }
    set1.insert(0);
    for(int i=1; i<= count1; i++){
        set1.insert(count1+1-i);
        set1.insert(num+ count1-i+1);
    }
set1.insert(num);
cout<<set1.size()<<endl;
    for(auto it : set1){
        cout<< it<<" ";
    }

cout<<endl;





    }

    return 0;
}