#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(){
    ll  t;cin >> t;

while(t--){
    ll n ,k;
    cin >> n >> k ;


if(n == 1){
    cout<<k<<endl; continue;
}
   ll tklog = log2(k+1);

    ll num = pow(2,tklog)-1;
    ll  num2= k-num;

ll  arr[k]={0};
arr[0]=num;
arr[1]=num2;

for(ll i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

}


    return 0;
}
