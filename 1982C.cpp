#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
                
        ll n,l,r;
        cin >> n >> l >>r ;

          vector<ll> vec(n);

        for( int i=0; i<n ;i++){
            cin >> vec[i];
        }
    ll pos=0;// 1st element is idx 0;
    ll win=0;

vector<ll>vec2(n);
ll sum = vec[0];

for(int i=0; i< n ;i++){
   if(i == 0) vec2[i]= vec[0];
   else{
    vec2[i] = vec2[i-1]+vec[i];
   }
   //cout<<vec2[i]<<" ";
    
}// use binary search in sum arr for 2* while loop

cout<<endl;



    while(1){

        if(vec[pos] <= r && vec[pos] >= l){
            win ++;
            pos++;

        }

        else if(vec[pos] > r){
            pos++;
        }
        else if(vec[pos] < l){
            ll sum = vec[pos] ;
            int tempos = pos;

            while(tempos< n && sum<r){
                tempos++;
                if(tempos<n)sum += vec[tempos];
                if(sum <=r && sum >= l){
                    win++;
                    //tempos++;
                    pos = tempos;
                    break; 
                   
                }
            }
        pos++;
        }

        if(pos>= n) break;



    }
    
    cout<<win<<endl;




    }

    return 0;
}