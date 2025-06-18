#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
                
        ll n;
        cin >> n;
        vector<ll> vec1(n) ;
        for(auto &i : vec1){
            cin >> i;
        }

    set<int> nonneg(vec1.begin(), vec1.end());
    int missing =0;
    while(nonneg.find(missing) != nonneg.end()){
        missing ++;
    }// n2

    if(*min_element(vec1.begin(),vec1.end()) > 0){
        cout<<2<<endl;
        cout<<1<<" "<<1<<endl;
        cout<<2<<" "<<n<<endl;
        continue;
    }
    //cout<<missing<<endl;

    vector<bool> vec2(missing);
    int i=0;
    for( i=0;i<n;i++){
        if(vec1[i] <missing){
            vec2[vec1[i]] =true;
            if(find(vec2.begin(),vec2.end(),false) != vec2.end() ) {}
            else{
                break;
            }
        }
    }//n2
    //cout<<"i"<<i<<endl;
    // if not present completly-> -1
    int ans=0;

    vector<bool> vec3(missing);
    for(int j=i+1;j<n;j++){
        if(vec1[j] <missing){
            //cout<<"j"<<j;
            vec3[vec1[j]] =true;
            if(find(vec3.begin(),vec3.end(),false) != vec3.end() ) {}
            else{
                ans =1;
                break;
            } 
           // cout<<vec3[0]<<vec3[1];       
        }
    }// n2 

    if(ans==1){
        cout<<2<<endl;
        cout<<1<<" "<<i+1<<endl;
        cout<<i+2<<" "<<n<<endl;
    }
    else{
        cout<<-1<<endl;
    }



    }

    return 0;
}