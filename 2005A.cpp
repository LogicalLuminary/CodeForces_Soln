#include<iostream>
using namespace std;

int main(){
    int trials;
    cin >> trials;
    for(int p=1; p<=trials ;p++){
      
        int n;
        cin>>n;
        int extra =n%5;
        char arr[n];
        int i=0;
        // for(i;i<n/5;i++){
        //     arr[i]='a';
        // }
        // if(extra !=0) {arr[i]='a';
        // i++;};

        // for(i;i<2*(n/5);i++){
        //     arr[i]='b';
        // }
        // if(extra ==2){arr[i]='b';i++;};

        // for(i;i<3*(n/5);i++){
        //     arr[i]='c';
        // }
        // if(extra ==3){arr[i]='c';i++;};

        // for(i;i<4*(n/5);i++){
        //     arr[i]='d';
        // }
        // if(extra ==4){arr[i]='d';i++;};

        // for(i;i<5*(n/5);i++){
        //     arr[i]='e';
        // }
        
        // for(int j=0;j<n;j++){
        //     cout<< arr[j];
        //}


        for(int i=0;i<n/5+(extra>0);i++){
            cout<<'a';
        }
        for(int j=0;j<n/5+(extra>1);j++){
            cout<<'e';
        }
          for(int k=0;k<n/5+(extra>2);k++){
            cout<<'i';
        }
          for(int l=0;l<n/5+(extra>3);l++){
            cout<<'o';
        }
        for(int m=0;m<n/5+(extra>4);m++){
            cout<<'u';
        }





    cout<<endl;




    }
    return 0;
}