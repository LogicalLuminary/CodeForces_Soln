#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
                
        ll n;
        string s;
        cin >> n;
        cin >> s;
    int step1;int step2;
{
        ll ptr1=0, ptr2=n-1;
        
    bool posible1= true;int removed1=0;
    char c;ll num1=0;
    while(ptr1<=ptr2){

        if(s.at(ptr1) == s.at(ptr2)){
            ptr1++;
            ptr2--;
        }
        else if(s.at(ptr1) != s.at(ptr2)){
            if(removed1 ==0){
                c= s.at(ptr2);
                ptr2--;
                removed1=1;
                num1++;
            }
            else{
                if(s.at(ptr2)== c) ptr2--;
                else if(s.at(ptr1) == c) ptr1++;
                else {posible1 =0; break;}
                num1++;
            }

        }
    }

    if(posible1 == 0) step1= -1;
    else step1= num1;
}


{reverse(s.begin(),s.end());
        ll ptr1=0, ptr2=n-1;
        
    bool posible1= true;int removed1=0;
    char c;ll num1=0;
    while(ptr1<=ptr2){

        if(s.at(ptr1) == s.at(ptr2)){
            ptr1++;
            ptr2--;
        }
        else if(s.at(ptr1) != s.at(ptr2)){
            if(removed1 ==0){
                c= s.at(ptr2);
                ptr2--;
                removed1=1;
                num1++;
            }
            else{
                if(s.at(ptr2)== c) ptr2--;
                else if(s.at(ptr1) == c) ptr1++;
                else {posible1 =0; break;}
                num1++;
            }

        }
    }
    if(posible1 == 0)step2 =-1;
    else step2 = num1;

}
if(step1 == -1 && step2 == -1) cout<<-1;
else if(step1>=0 && step2<0) cout<<step1;
else if(step2>=0 && step1<0) cout<< step2;
else cout<<min(step1,step2);
cout<<endl;

    }

    return 0;
}