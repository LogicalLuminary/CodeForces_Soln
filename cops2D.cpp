#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
                
        ll n , m , h;
        cin >> n >> m >> h;
        vector<vector<ll>> arr(n,vector<ll>(m)) ;

    for(ll i =0; i<arr.size(); i++){
        for(ll j=0; j< m;j++ ){
            cin >> arr[i][j];
        }
    }

vector<pair<ll,ll>> score(n);

    for(int i=0;i<n;i++){
        ll sum =0;
        ll sumarr[m]={0};
        ll pt=0;ll pnelty=0;ll tt= h;
        sort(arr[i].begin(), arr[i].end() );// sorting row
        sumarr[0]= arr[i][0];
        for(int k=1; k<m;k++){
            sumarr[k]= sumarr[k-1]+arr[i][k];
        }
        for(int j=0;j<m;j++){
            if(arr[i][j] <= tt){
                pt++;
                tt -= arr[i][j];
                pnelty += sumarr[j];
               // cout<<pnelty<<" ";
            }
            else{}
            //cout<<endl;
        }

        score[i].first = pt;
        score[i].second = -pnelty;

    }

// for(auto i: score){
//     cout<< i.first<<" "<<i.second<<endl;
// };

pair<ll,ll> rdf = score[0];


sort(score.begin(), score.end(),greater<pair<ll,ll>>());


auto it = find(score.begin(), score.end(),rdf);
int idx = distance(score.begin(),it);
cout<<idx+1<<endl;

}

    return 0;
}