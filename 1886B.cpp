#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

long double dist(int x1, int y1 , int x2 ,int y2){

    ll dis = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1); 
    long double ans = sqrt(dis) ;
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
                
        ll px,py;
        ll ax,ay;
        ll bx,by;

        cin >> px>>py>>ax>>ay>>bx >> by ;

        //cout<<dist(ax,ay,0,0);
         long double r1 = min (dist(ax,ay,0,0), dist(bx,by,0 ,0));
         long double r2 = min(dist(ax,ay,px,py), dist(bx,by,px,py)) ;

    cout<<max(r1,r2)<<endl;





    }

    return 0;
}