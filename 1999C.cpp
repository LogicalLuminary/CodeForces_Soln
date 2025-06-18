#include<iostream>

using namespace std;
int main(){

int trials;
cin >> trials;

for(int k=0;k<trials;k++){

    int intervals;
    int st;
    int tt;
    bool flag = false;
    cin>> intervals;
    cin>> st;// showering time
    cin >> tt;// total time

     int start=0;
    for(int i=0;i<intervals;i++){
        int from;int to;
        cin>> from;
        cin >> to;;
        
        
        if((from - start)>=st){
            flag =true;
            //break; do not break otherwise not take other inputs 
        }
         // now for last case
        else if((i == intervals-1)&&(tt-to >=st)){
            flag = true;
            
        }
        else {
            start = to;
            
        }
     
    }

    if(flag == false){
        cout<< "NO\n";
    }  
    else {
        cout <<"YES\n";
    }
}







    return 0;
}