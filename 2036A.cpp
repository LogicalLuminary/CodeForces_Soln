#include<iostream>

using namespace std;

int main(){

int trials;
cin>> trials;
for(int i=0;i<trials;i++){

    int no;
    cin>>no;
    int arr[no];
        for(int j=0;j<no;j++){
            cin>>arr[j];
        }
        bool melody = true;
        for(int k=0;k<no-1;k++){
            if((arr[k]-arr[k+1])== 5 || (arr[k]-arr[k+1])== 7||(arr[k]-arr[k+1])== -5||(arr[k]-arr[k+1])== -7);

            else {melody = false;
                    break;
            }
        }
        if(melody== true) cout<<"YES\n";
        else cout<<"NO\n";





}

    return 0;
}