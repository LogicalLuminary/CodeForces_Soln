#include<iostream>

using namespace std;

int main(){


int trials;
cin>> trials;

for(int i=0;i<trials;i++)
{
    int l,r;

    cin>> l>>r;

    int j=0;
    while(j*(j+1)/2 < (r-l+1)){
        j++;
    }
cout<< j<<endl;

}





    return 0;
}