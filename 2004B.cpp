#include<iostream>

using namespace std ;

int main(){

    int t;
    cin>> t ;
    while(t--){

        int l,r;
        int L,R;
        cin>>l>>r>>L>>R ;

        if(r<L || R<l) cout<<1;//<<endl ;

        else if((L<l && R>r)){
            cout<< r-l+2;//<<"a"<<endl;
        }
        else if(l<L && r>R){
            cout<<R-L+2;//<<"b"<<endl ;
        }
        else if(l == L){
            if(R>r) cout<<r-l+1;//<<endl;
            else if(r>R)cout<<R-l+1;//<<endl;
            else cout<<R-L;//<<endl ;
        }
         else if(r == R){
            if(L<l) cout<<r-l+1;//<<endl;
            else if(L>l)cout<<r-L+1;//<<endl;
        }
        else if(l==R || L == r){
            cout<<2;
        }
        else if(L<r && l<L){
            cout<<r-L+2;//<<"c"<<endl ;
        }
        else if(R>l){
            cout<<R-l+2;//;//<<"d"<<endl;
        }
        cout<<endl;

    }

}