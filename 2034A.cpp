#include<iostream>
using namespace std;
int hcfval = 0;
void hcf(int a, int b) {
    if (b == 0) {
        hcfval = a; // Base case: HCF found
        return;
    }
    hcf(b, a % b); // Recursive step
}




int main(){

int t;
cin >> t;
while(t--){

    int a,b;
    cin>> a>>b;//assuse b>a
    if(b>a){ 
        hcf(a,b);
        cout<<a*b/hcfval<<endl;
    }
    else{
        hcf(b,a);
        cout<<a*b/hcfval<<endl;
    }


}


    return 0 ; 
}