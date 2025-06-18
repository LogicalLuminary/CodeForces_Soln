#include<iostream>
#include<cmath>
#include<string>
using namespace std ;

void check(int n,string s){
    
    bool check = true;
    int k = sqrt(n);
    for(int i=1;i<=n;i++){ 
        
        if( i>=1 && i<=k){
            if (s.at(i-1) != '1') check =false;
        }
        else if(i>= k+1  && (i% k == 0 || (i-1)% k == 0) && i<= n-k){
            if(s.at(i-1) != '1') check = false;
        }
        else if(i>= n-k){
            if(s.at(i-1) != '1') check = false;
        }
        else {
            if(s.at(i-1) !='0') check = false;
        }
    
    }
   
   if(check == true) cout<<"Yes\n";
   else cout<<"No\n";


}


int main(){
    
    int trials;
    cin >> trials;
    for(int p=1;p<=trials; p++){
        int n;
        cin>> n;
        string s;
        cin>> s;
        int k= sqrt(n);
    if((n)-k*k != 0){
        cout<<"No\n";
        
    }
    else  
        check (n,s);
    }

// 5-sqrt(5)





    return 0;
}

