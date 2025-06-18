
#include<bits/stdc++.h>
using namespace std;


int main(){
int t;
cin >>t ;
while(t--){

    int n,m;// nrows
    cin >> n>>m;

    vector<vector<char>>mat1(n,vector<char>(m));
    vector<vector<char>>mat2(n,vector<char>(m));


    for(int i=0;i<n ;i++){
        for(int j=0;j<m; j++){
            cin >> mat1[i][j];
        }
    }

    for(int i=0;i<n ;i++){
        for(int j=0;j<m; j++){
            cin >> mat2[i][j];
        }
    }

int row1[n];
    for(int i=0;i<n ;i++){
            int sum=0;
        for(int j=0;j<m; j++){
            
            sum+= (mat1[i][j]-mat2[i][j])%3 ;

        }
        sum= abs(sum);
        sum = sum%3;
        row1[i]=sum;
    }


int col1[m];
    for(int i=0;i<m ;i++){
            int sum=0;
        for(int j=0;j<n; j++){
           // cout<<mat1[j][i]<<" ";
            sum+= (mat1[j][i]-mat2[j][i])%3 ;

        }
       // cout<<endl;
       sum= abs(sum);
        sum = sum%3;
        col1[i]=sum;
    }

int a=0,b=0;
for(int i=0;i<n;i++){
    cout<<row1[i]<<" ";
    a+= row1[i];
}
cout<<endl;

for(int i=0;i<m;i++){
    b+= col1[i];
    cout<<col1[i] << " ";
}


if(a==0 && b== 0){
    cout<<"yeS\n";
}
else cout<<"no\n";

}


    return 0;
}