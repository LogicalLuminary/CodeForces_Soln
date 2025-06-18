#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>

using namespace std;
int main(){
    int t;
    cin >>t ;
    while(t--){


    int n;
    int p;
    cin >> n>>p ;
    vector<pair<int,int>> vec(n);
    int temp;

    for(int i = 0 ;i<n;i++){
        cin>> vec[i].second;
    }
    for(int i =0; i<n; i++){
        cin >> vec[i].first;
    }
    long long int cost = p;
    int done =1;
    sort(vec.begin(), vec.end());
    int sum=0;
    // for (const auto& p : vec) {
    //     sum+= p.first;
    //     cout << "(" << p.first << ", " << p.second << ") ";
    // }
    //cout<<sum<<endl;


n--;

    int i=0;
    while(n){

        //cout<<cost<<endl;
       // cout<<n<<endl;
        if(vec[i].second <= (n)){
            cost += vec[i].first * vec[i].second;
            n -= vec[i].second;
            done+= vec[i].second ;
         //   cout<<done<<endl;
        }
        else{
            cost +=  vec[i].first* ((n));
            done += n;
           // cout<<done<<endl;
            n= n-n; 
        }

        i++;

    }
cout<<cost<<endl;
    }



    return 0 ;
}