#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
                
        vector<ll> vec(3);
        cin >> vec[0]>>vec[1]>> vec[2];

        long double x= (vec[0]+vec[1]+ vec[2])/3.0 ;

    sort(vec.begin(), vec.end()) ;
    
    if(vec[0]==vec[1] && vec[1]==vec[2]){}
    else if(vec[0] == vec[1] ){ 
        vec[2]--;
        if(vec[1] == vec[2]) {}
        else{
            vec[0]++;vec[1]++;
        }
    }

    else if(vec[1] == vec[2]){vec[0]++;
        if(vec[0] == vec[1]){}
        else {vec[1]--;vec[2]--;}
    }

else{
    for(int i=0;i<3;i++){
        if(vec[i] > x ) vec[i]--;
        else if(vec[i] <x) vec[i]++;
        else{ };
    }
}
    ll sum = abs(vec[0]-vec[1])+abs(vec[2]-vec[1])+abs(vec[0]-vec[2]);

cout<<sum<<endl;


    }

    return 0;
}