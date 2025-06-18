// #include <bits/stdc++.h>
// using namespace std;



// long int power(long int k,long int p){
//     int long pow=1;

//     for(int i=0;i<p;i++){
//         pow*=k ;
//     }
//     return pow;
// }




// int sub(long int n, long int k){
//     int i=0;
//     if(k!=1)
//     	{while (n-power(k,i)>=0){
//         i++;
//     	}

//     	return power(k,i-1);}
//     if (k==1) {
//     return 1;}
// }





// int main(){


// int trials;
// cin >>trials;
//  long int n;

// long int k;


// int i=0;



// for(int i=1;i<=trials;i++){
//     int ans=0;
//     cin>>n;
//     cin>> k;
//     while(n>0){
//         n=n-sub(n,k);
//         ans++;
//     }
//     cout<< ans<<endl;

// }



// return 0;
// }


#include<iostream>
using namespace std;

int main(){

    int t; cin >> t;
    while(t--){


    int n;
    int k;
    cin >> n >> k ;
int p=1;
int sizeofarr = 0;

if(k == 1){
    cout<< n<<endl;
    continue;
}


    for(int i =0; p<=n; i++){
        p *=k;sizeofarr ++;
    }

    p=1;


int arr[sizeofarr] ;

    for(int i =0; p<=n; i++){
        arr[i] = p;
        p *=k; 
    }

int ans = 0; 
int i=0;



while(n>0){

    if(n/arr[sizeofarr -1 -i] >0){
        ans+=( n/arr[sizeofarr -1 -i]) ;
        n = n% arr[sizeofarr -1 -i];
        }
    if(i == sizeofarr-1) break;
    i++;
}








cout<< (ans )<<endl ;

    }
    return 0;   
}