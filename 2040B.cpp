#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;




int main(){


    long long int t;  
    cin >> t;
    long long int arr[t+1]={0};
    long long int max = -1;
    for(int i=1; i<= t; i++){
        cin >> arr[i];
        if(max < arr[i]) max= arr[i] ;
    }
    //cout<<max<<endl ;

    vector<pair< long long int , int>> vec;
    // 1st is value // 2nd is at what idx starting from 1
    
    vec.push_back({1,1}) ;
    vec.push_back ({4,2}) ;
    int i=0;
    long long int temp ;
        while(1){
            i++;
            temp = (vec[i].first+1)*2 ;
            vec.push_back({temp, i+2});

            if(temp >= max) break;
        }
        for(int j =1; j<= t; j++){

        auto it = lower_bound(vec.begin(), vec.end(), make_pair(arr[j], 0), 
        [](const pair<long long int, int>& a, const pair<long long int, int>& b) {
            return a.first < b.first; // Compare based on the first element
        });
        int position = it-vec.begin() ;

        cout<< position+1<<endl;
        }






    return 0;
}