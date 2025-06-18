#include<iostream>
using namespace std;

int min(int a, int b, int c, int d ){
    if(a<=b && a<=c && a<=d ) return a;
     if(b<=a && b<=c && b<=d ) return b;
      if(c<=b && c<=a && c<=d ) return c;
       if(d<=b && d<=c && d<=a ) return d;

}



int main(){
int t;
cin>> t;
while(t--){

int n;
cin >> n;

int x1,x2,y1,y2 ;
cin >> x1 >> y1>> x2>>y2 ;

int level1 =min(x1,y1,n+1-x1,n+1-y1);
int level2 = min(x2,y2,n+1-x2,n+1-y2);

if(level2 - level1 >=0){
    cout<< level2-level1<<endl ;
}
else{
    cout<<level1- level2 <<endl;
}

}


    return 0;
}