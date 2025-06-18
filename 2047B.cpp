#include<iostream>

using namespace std;

int main(){


int t;
cin>> t;
while(t--){


int n;
cin>> n;
string s ;
cin>> s;
string s2 = s;
int arr[26] = { 0 };

for(int i = 0 ; i<s.length(); i++){

    arr[s.at(i) - 'a'] ++;
}

int max = INT32_MIN;
int min = INT32_MAX;
int minidx= -1, maxidx = -1;
for(int i = 0 ; i <26 ;i++){
    if(arr[i]> max){
        max = arr[i] ;
        maxidx = i;
    }
    if(arr[i]<=min && arr[i]>0){
        min =arr[i];
        minidx = i;
    }

}

//cout<<minidx<<"i"<<maxidx ;
// s2.at(minidx) = s2.at(maxidx);

for(int i=0 ;i< s.length(); i++){

    if(( s2.at(i)-'a') == minidx){
        s2.at(i) = maxidx + 'a';
        break;
    }

}

cout<<s2<<endl;




}


    return 0 ;
}