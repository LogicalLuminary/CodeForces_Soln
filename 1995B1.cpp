#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
ll maxSumUnderX(ll a, ll b, ll p, ll q, ll x) {
    ll maxSum = 0;

    for(int i=1; i<=p ; i++){

        ll remaining = x-a*i;
        if(remaining <0 ) break ;

    ll n = min(q,remaining/b);
    ll sum = a*i+b*n;
    if(sum > maxSum && sum <= x) maxSum = sum ; 

    }

    return maxSum;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
                
        ll n,m;
        cin >> n >> m ;
        vector<int> petal(n);
        for(int i=0; i<n ;i++){
            cin >> petal[i];
        }
        map< int , ll> map1;
        for(int i=0;i<n; i++){
            map1[petal[i]] += petal[i] ;
        }
        ll max= 0;auto it= map1.begin() ;
        for(int i=0;i<map1.size();i++){

            ll sum1 = it->second;
            ll val= it->first;
            it++;
            ll val2 = it->first ;
            ll sum2;
        if(val2==val+1)
             sum2 = it->second ;
        else sum2 =0;

            if(sum1 + sum2 > max && sum1+sum2 <= m ){
                max = sum1+sum2 ;
            }
            else if(sum1+ sum2>max && sum1+sum2 >m){
                ll result = maxSumUnderX(val,val2,sum1/val,sum2/val2,m);
                if(result > max) max= result ; 
            }
        }
        
        cout<<max<<endl;






    }

    return 0;
}