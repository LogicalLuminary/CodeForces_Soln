#include<iostream>

using namespace std ;

int main(){
int t;
cin>>t;
while(t--){
    int n,m,k;
    cin>>n>>m>>k; 
    string s;
    cin>> s ;

    int arr[n+m+k]={0};
    int zeros=0;
    string s2 = s;
    for(int i=0;i<n;i++){
       
        if(s2.at(i) =='0'){
            zeros++;
        }
        else{
            zeros= 0;
        }
        if(zeros>= m){
            arr[i]++;
        }
    }

    // for(int i=0;i<n;i++){//arrar me dikkat wale points 1 ho gaye hai
    //     cout<<arr[i];
    // }cout<<endl;
    int magic=0;



    for(int i=0;i<n;i++){
        if(arr[i] >0){
        //    for(int j=i;j<k+i;j++){

        //     if(j<n) s2.at(j)='1';
        //     cout<<s2<<endl;
        //    }
           magic++;
           for(int l=0;l<k+m-1;l++){
                arr[i+l]=0;
                //  for(int p=0;p<n;p++){//arrar me dikkat wale points 1 ho gaye hai
                //         cout<<arr[p];
                // }
                // cout<<endl ;
           }

        }
    }

cout<<magic<<endl ;

}

    return 0; 
}