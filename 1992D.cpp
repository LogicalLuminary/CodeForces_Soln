// strategy
// 1st priority is to jump on nearest Log if possible;
// 2nd jump on farthest water
 



 #include<bits/stdc++.h>
 
 using namespace std;
 typedef long long int ll;
 
 int main() {
     int t;
     cin >> t;
     while (t--) {
                 
         ll n , m , k;
         cin >>  n>> m >>k;

        string s;
        cin >> s;

    vector<ll> log;
    log.push_back(-1);// coz 1st log is ground
    for(int i=0;i<s.length(); i++){
        if(s.at(i) == 'L') {
            log.push_back(i);
        }
    }

    bool alive = true;
    bool onlog = true;
    
    ll pos = -1;
    ll logno = 0;
    ll swam= 0;
    int len = log.size();//coz if do log.size()-2 and if size is 1 it gives big positive no
    // coz its unsigned int type
    log.push_back(INT_MAX);
int i=0;
    while(pos< n){


        if(onlog){
            // if(logno == log.at(len-1)){
                
            // }
            if((logno<= len-1) ){
                //cout<<logno<<" "<<log.at(logno)<<" "<<log.at(logno+1);
                if(((log.at(logno+1)- log.at(logno) )<= m)){
                pos = log[logno+1];
                onlog = true;
                logno++;
                //cout<<"l";
                }
            
                else{
                    pos += m;
                    onlog = false;
                }
            }
        }



        else{
            //cout<<"w";
            if(s.at(pos) == 'C'){
                alive = false;
                break;
            }
            else{
                swam++;
                if(swam>k){
                    alive = false;
                    break;
                }

                pos++;
                if(pos>=n) break;
                if(s.at(pos) == 'L') {
                    onlog =true;
                    logno++;}
            }
        }
        //cout<<pos<<endl;
        i++;
        // if(i == 2) break;
    

    }

    if(alive){cout<<"YES\n";}
    else{cout<<"NO\n";}
 
 
 
 
 
     }
 
     return 0;
 }