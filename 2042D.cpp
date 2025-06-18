#include<iostream>

using namespace std ;

int main(){
int t;
cin>> t;
while(t--){

int n;
cin>> n ;

int arrL[n];
int arrR[n];

for(int i = 0; i<n ; i++){
    cin>> arrL[i];
    cin>>arrR[i] ;
}




for(int i = 0 ; i < n ; i++){
    
        int predidx[n] ;
        int predetor =0;
        int minR = INT32_MAX; int maxL = -1;
        // for(int i2 = 0 ; i2 < n ; i2++){
        //     predidx[i2] = -1 ;
        // }

        for(int j =0; j<n ;j++){
           // cout<<"i";
           if(i == j) continue ;
            if((arrL[j]<= arrL[i])  &&  (arrR[j]>= arrR[i])){
                predidx[j] = j; 
                predetor++;
                if(arrR[j]< minR) minR = arrR[j];
                if(arrL[j] > maxL ) maxL = arrL[j];
            } 
        }

       // cout<<predetor;
        if(predetor == 0) {
            cout<<0<<endl;
            continue ;
        }

        int rangeofpred = minR - maxL +1;
        int rangeofi = arrR[i] - arrL[i] + 1;

        cout<<rangeofpred - rangeofi<< endl ;


}

}

    return 0 ;
}