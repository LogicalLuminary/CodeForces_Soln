// // #include<bits/stdc++.h>

// // using namespace std;
// // typedef long long int ll;
// // int intpow(int base, int exp) {
// //     int result = 1;
// //     while (exp > 0) {
// //         if (exp % 2 == 1) {
// //             result *= base; // If exp is odd, multiply result by base
// //         }
// //         base *= base; // Square the base
// //         exp /= 2; // Divide exp by 2 (right shift)
// //     }
// //     return result;
// // }

// // int main() {
// //     int t;
// //     cin >> t;
// //     while (t--) {
                
// //         ll k,l1,r1,l2,r2;
// //         cin >> k >> l1 >> r1 >> l2 >> r2 ;
// //     ll ans =0; 
// //     for(int i=l1 ; i<=r1 ; i++){
        
// //         int n=0;
// //         while(i*intpow(k,n) <= r2){
// //             ll y =i*intpow(k,n) ;
// //             if(y<= r2 && y>=l2) {
// //                 ans++;
// //             }
// //             n++;
// //             //cout<<n<<endl;
// //         }
        
// //     }
// //     cout<<ans<<endl;





// //     }

// //     return 0;
// // }






#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll intpow(ll base, ll exp) {
    ll result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result *= base; 
        }
        base *= base;  
        exp /= 2;      
    }
    return result;
}




int main() {
    int t;
    cin >> t;

    while (t--) {
        ll k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;

        ll ans = 0;

        
        for (ll n = 0; ; ++n) {
            ll factor = intpow(k, n); // k^n 

            if (factor > r2) {
                break; 
            }

            ll min_x = (l2 + factor - 1) / factor;  
            ll max_x = r2 / factor;                  

            min_x = max(min_x, l1);
            max_x = min(max_x, r1);

            if (min_x <= max_x) {
                ans += (max_x - min_x + 1); // Count 
            }
        }

        cout << ans << endl;
    }

    return 0;
}