#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
                
        ll n,k;
        cin >> n >> k ;

    vector<ll> arr(n);
    ll done =0;
    int i;
int count= 1;
int temp; ll max=n;
while(done < n){
temp = done;
    for( i=done;i<k+temp-1 && done<n;i++){
        arr[i]=max;
        done++;
        max--;
    }
if(done<n){
    arr[i]= count;
    count++;
    i++;
    done++;}
        
}

for(auto i: arr){
    cout<<i<<" ";
}
cout<<endl;


    }

    return 0;
}