#include<iostream>

using namespace std;

void swap(int* a, int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
    return ;
}

int main(){

int trials;
cin>> trials;
for(int t=0;t<trials;t++){


    int n,k;
    cin>>n>>k;
    typedef struct info{
        int comp, price;
    }info;

    info arr[k];
    for(int i=0;i<k;i++){
        cin>>arr[i].comp>>arr[i].price;
    }

int sum[k]={0};

for(int j=0;j<k;j++){
    sum[arr[j].comp-1] += arr[j].price;
    }

int total=0;

if(n>=k) {for(int l=0;l<k;l++){
        total+=sum[l];
    }
    cout<< total<<endl;
    continue;}


for (int i = 0; i < k; i++) {
    for (int j = 0; j < k - i - 1; j++) {
        if (sum[j] < sum[j + 1]) {     
            swap(&sum[j], &sum[j + 1]);  
        }
    }
}


// for(int i=0;i<k;i++){
//     cout<<sum[i]<<endl;
// }



if(n<=k){
    for(int l=0;l<n;l++){
        total+=sum[l];
    }
}

cout<< total<<endl;



}



    return 0;
}