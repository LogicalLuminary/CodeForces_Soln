#include<iostream>

using namespace std;
int main(){

int trials;
cin>> trials;

for(int i=0;i<trials;i++){

    string s;
    cin>> s;
    if(s.at(0) > s.at(2)){
        (s.at(1)='>');
    }
    else if(s.at(0) < s.at(2)){
        s.at(1)= '<';
    }
    else{
        s.at(1)='=';
    }


    cout<<s<<endl;

}


    return 0;
}