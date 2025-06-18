#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {

    ll n, m,k;
    cin >> n >> m >> k ;
    vector<ll> vec1(n);
    for(int i=0;i<n;i++){
        cin >> vec1[i];
    }

    vector<vector<int>> op(m,vector<int>(3,0));
    
    for(int i=0; i<m ;i++){
        cin>> op[i][0];
        cin>> op[i][1];
        cin>> op[i][2];
    }

    vector<pair<int, int>> qur(k);

    for(int i=0;i<k;i++){
       cin >> qur[i].first;
       cin >> qur[i].second;
    }

vector<ll> optimes(m);
for(int i=0;i<m;i++){
    for(int j=0; j< k;j++){
        if(qur[j].first -1 <=i && qur[j].second >= i+1){
            optimes[i]++;
        }
    }
}

// for(int i=0;i<m;i++)
// {
//     cout<< op[i][0]<<" "<<op[i][1]<<" "<<op[i][2]<<endl;
// }

for(int i =0;i<m;i++){
    for(int j=op[i][0] ; j<= op[i][1]; j++){
        vec1[j-1] += (op[i][2]*optimes[i]);
        //cout<< (op[i][3]*optimes[i])<<endl;
    }
}

for(int i=0;i<n;i++)
{
    cout<< vec1[i]<<" ";
}


    return 0;
}