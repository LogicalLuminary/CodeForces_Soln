#include<iostream>
#include<vector>

using namespace std;
typedef long long int ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
                
        int n ,q ;
        cin >> n>> q ;
        string s1,s2;
        cin >> s1 >> s2 ;

        vector<pair<int , int >> inp(q);
        for(int i=0; i< q ;i++){
            cin >> inp[i].first ;
            cin >> inp.at(i).second ;
        }



    // for(int i=0; i<q; i++){

    //     vector<int> arr(26);
    //     for(int j=inp[i].first-1 ; j < inp[i].second ; j++ ){
    //        // cout<<inp[j].second<<"p";
    //         arr[(s1.at(j)-'a')]++;
    //         arr[s2.at(j)-'a'] -- ;
    //     }

    //     ll sum=0;
    //     for(int j=0; j< 26; j++){
    //         //cout<<arr[j];
    //         sum+= abs(arr[j]);
    //     }  

    // //cout<<endl;
    
    // cout<<sum/2<<endl;



    // }

vector<vector<int>> prefix1(26,vector<int>(n+1,0));
vector<vector<int>> prefix2(26,vector<int>(n+1,0));

for(int i=0; i< 26 ;i ++){
        int sum1 =0;int sum2 =0;

    for(int j =0; j<n; j++){
        if(s1.at(j) == i+'a' ){
            sum1 ++;//j+1 coz 1 idx for letter
        }
        prefix1[i][j+1] = sum1;
        if(s2.at(j) == i+'a'){
            sum2++;
        }
        prefix2[i][j+1] = sum2 ;
    }
}

for(int i=0; i<q; i++){

    int l = inp[i].first, r = inp[i].second ;
    int diff=0;
    for(int j =0; j< 26 ;j ++){
        int p1 = prefix1[j][l-1]-prefix1[j][r];// l-1 coz l wale ko count karna hai
        int p2 = prefix2[j][l-1]-prefix2[j][r];// if di l-r, l wale ka char count nhi hoga 
        diff += abs(p1- p2);
    }
    cout<< diff/2 <<endl;


}










    }

    return 0;
}