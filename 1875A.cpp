#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){

long long int maxt;
long long int init;
long long int n;


    cin >> maxt >> init >> n ;

    vector<long long int> vec(n);
    int max=0;
    for(int i=0 ;i< n; i++){
        cin >> vec[i] ;
        if(vec[i] > max) max = vec[i];
    }
        if(maxt ==1){
        cout<<init<<endl;
        continue;
    }


   long long int sum = init ;
    for(int i=0;i<n;i++){

        
        if(vec[i] >= maxt){
            sum += (maxt-1);
           // vec2[vec[i]] = 1;
        }
        else{
            sum += vec[i];
           // vec2[vec[i]]=1;
        }
        
    }
    cout<<sum<<endl;



    }




   
   
    return 0;

}