#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        

                
        ll n;
        cin >> n ;
        vector<int>vec1(n);
        for(int i=0; i< n ;i ++){
            cin >> vec1[i];
        } 
        //int min = *min_element(vec1.begin(), vec1.end());
       // int minidx = min_element(vec1.begin(), vec1.end())-vec1.begin();
        //cout<<min<<" "<<minidx<<endl;
 //       if(t == 902){
        //     for (auto i:vec1){
        //         cout<<i;
        //     }
        // }
        vector<int>vec ;
        for(int i=0; i< n; i++){
            //int min = *min_element(vec1.begin()+i, vec1.end());

            if( !is_sorted(vec1.begin()+i,vec1.end() ) ){
               // cout<<"r";
            int num =vec1[i];
            int dig=0;
            if(num == 0){dig++ ;}
            while(num){
                num= num/10;
                dig++;
            }
            vector<int>digit(dig);
            int j=0;
            while(vec1[i]){
                digit[dig-j-1]=vec1[i]%10 ;
                vec1[i] /=10 ;
                j++; 
            }

            vec.insert(vec.end(), digit.begin(),digit.end()) ;
            }

        else{
            vec.insert(vec.end(), vec1[i]);
        }
        // for(auto & i :vec){
        //     cout<<i<<" ";
        // }
        // cout<<endl;
        }
        if(is_sorted(vec.begin(), vec.end())) cout<<"YES\n";
        else cout<<"NO\n" ;
//int j= fact(4);



    }

    return 0;
}