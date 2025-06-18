#include<bits/stdc++.h>
#define CLEAR system("cls")
using namespace std;

bool solve(long long value, map<long long,long long>&myMap){
    if(myMap[value]){
        myMap[value]--;
        return true;
    }

    if(value == 1){
        return false;
    }

    long long a = (value+1)/2;
    long long b = (value)/2;

    return solve(a,myMap) && solve(b,myMap);
}


int main()
{	CLEAR;

    long long t;
    cin>>t;
    for(long long p=0; p<t; p++){
        long long n,m;
        cin>>n>>m;
        vector<long long>va(n);
        vector<long long>vb(m);
        long long sum1=0;
        long long sum2=0;
        for(long long i=0; i<n; i++){
            cin>>va[i];
            sum1+=1ll*va[i];
        }
        for(long long i=0; i<m; i++){
            cin>>vb[i];
            sum2+=1ll*vb[i];
        }

        if(sum1!=sum2){
            cout<<"No"<<endl;
            continue;
        }

        sort(vb.begin(), vb.end());

        map<long long,long long>myMap;
        for(long long i=0; i<n; i++){
            myMap[va[i]]++;
        }

        bool flag = true;
        for(long long i=0; i<m; i++){
            flag = solve(vb[i],myMap);
            if(!flag){
                break;
            }
        }

        if(flag){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }

    }
    return 0;
}