#include<iostream>

using namespace std ;

int main(){
int t;cin>>t;
while(t--){
int n;
cin>> n;
int input[n];
int arr[n]={0};

for(int i=0;i<n;i++){
    cin>> input[i];
    //arr[input[i]-1]=1;
}
bool right=true;

for(int j=0;j<n;j++){
    if(j==0){
        arr[input[j]-1]++;
        continue;
    }
    else{
        if(input[j]==1){
            if(arr[input[j]]>0){
                arr[input[j]-1]++;
                continue;
            }
            else{
                 right = false;
            break;
            }
        }
        else if(input [j ]== n){
             if(arr[input[j]-2]>0){
                arr[input[j]-1]++;
                continue;
            }
            else{
                 right = false;
                break;
            }
        }
        else if(arr[input[j]-2] >0 || arr[input[j]]>0) {
            arr[input[j]-1]++;
            continue;
        }
        else{
            right = false;
            break;
        }

    }

}
if (right == true){
    cout<<"YES\n";
}
else{
    cout<<"NO\n";
}


}
    return 0 ;
}