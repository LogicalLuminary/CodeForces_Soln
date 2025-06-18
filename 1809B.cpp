#include<bits/stdc++.h>
#include<cmath>
using namespace std;



int main(){
int t;
cin >>t ;

vector<long long int > vect(t);

for(int i=0; i<t;i++){
    cin >> vect[i] ;
}

long long int max= *max_element(vect.begin(), vect.end());
//cout<<max;

vector<long long int> sq;
long long int temp=-1;
long long int i=0;

while(i+1 < sqrt(max)-1){
    temp = (i+1)*(i+1);
    sq.push_back(temp);
    i++;
}


for(int i=0;i<t;i++){
    if(binary_search(sq.begin(), sq.end(), vect[i])){
        cout<< sqrt(vect[i])-1<<endl;
    }
    else {
        cout<<(int)floor(sqrt(vect[i]))<<endl;
    }
}






    return 0;
}