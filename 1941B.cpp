// #include <iostream>
// using namespace std;

// int main()
// {
//     int trials;
//     cin>> trials;
// while(trials--){
//     int n;
//     cin>> n;

//     int arr[n];
//     int totalmax = -1;
//     int maxidx = -1;
//     int totalmin=INT32_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         if(arr[i]>=totalmax) {totalmax = arr[i];
//         maxidx = i;}
//         if(arr[i]<totalmin){totalmin = arr[i];}

//     }

//     if(totalmax ==0 && totalmin == 0) {cout<<"YES\n";continue;}
//     if(arr[0] ==totalmax || arr[n-1] == totalmax) {cout<<"NO\n";continue ;};


//     int max=totalmax;
//     //int maxidx = 0;
//     bool possible= false;
//     int min = arr[0];
// for(int j=0;j<totalmax+1 && max >0 && min>=0; j++){

//     max = -1 ; maxidx =-1;
//     for (int i = 1; i < n-1; i++)
//     {
//         if (arr[i] >= max)
//         {
//             max = arr[i];
//             maxidx = i;
//         }
        
//     }
    

//       for (int i = 0; i < n; i++)
//     {
//         if (arr[i] < min)
//         {
//             min = arr[i];
            
//         }
//     }
//        // cout<< max;

//         if(max== 0 && arr[0]==0 && arr[n-1]==0 && min == 0) {
//             possible = true;
//             break;
//         }


//         else if(max == 0){
//             possible = false;
//             break;
//         }
        


//         arr[maxidx-1] -= 1;
//         arr[maxidx] -=2 ;
//         arr[maxidx+1] -= 1;
//    // cout<< arr[0]<<arr[1]<<arr[2]<<arr[3]<<endl;
// }

//     if(possible == true) cout<<"YES\n";
//     else cout<<"NO\n";
// }

//     return 0;
// }




// #include<iostream>
// using namespace std;

// int main(){

// int t;
// cin>> t;

// while(t--){


// int n;
// cin>> n;
// int arr[n];
// int max =-1;
// int min = INT32_MAX;
// int maxidx= -1;
// bool possible=false;

// for(int i=0;i<n;i++){
//     cin>>arr[i];
//     if(arr[i]>max) {max = arr[i];
//         }
//     if(arr[i]<min){min = arr[i];}
// }
    
    
//     if(max ==0 && min == 0) {cout<<"YES\n";continue;}



// int iterations=0;


// while ((min !=0 || max !=0)&& iterations<n+1){

  
//     for (int i = 1; i < n-1; i++)
//     {
//         if (arr[i] >= max)
//         {
//             max = arr[i];
//             maxidx = i;
//         }
        
//     }
//     if(maxidx == 0 || maxidx== n-1) {
//             break;
//     }

//         arr[maxidx-1] -= 1;
//         arr[maxidx] -=2 ;
//         arr[maxidx+1] -= 1;
//     min=INT32_MAX;

//       for (int i = 0; i < n; i++)
//     {
//         if (arr[i] < min)
//         {
//             min = arr[i];
//         }
//     }

//     max=-1; 
    
//     for (int i = 1; i < n-1; i++)
//     {
//         if (arr[i] >= max)
//         {
//             max = arr[i];
//             maxidx = i;
//         }
//     }
//     iterations++;

// }

// if(min==0&&max==0)cout<<"YES\n";
// else cout<<"NO\n";



// }

// return 0;
// }

#include<iostream>
using namespace std;

int main(){

int t;
cin>> t;
while(t--){
    int run =0;
    int n;
    cin>> n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

int max=-1;
int maxidx =-1;
bool posible = false;
bool stop = false;
while(1){
    
    int sum = 0;max=-10; maxidx=-1;
    for(int i=0;i<n; i ++){
        run++;
         if(max<arr[i])
        {
            max =arr[i];
            maxidx = i;
        }
        sum+=arr[i];
        if(arr[i] < 0){ stop = true; break;}
    }



    if (stop) {posible = false; break;} 

    if(sum == 0){
        posible = true;break;
    }

    if(maxidx == 0 || maxidx == n-1) {
        break;
    }

        arr[maxidx-1] -= 1;
        arr[maxidx] -=2 ;
        arr[maxidx+1] -= 1;


}

if(posible == true ){
    cout<<"YES\n";
}
else{
    cout<<"NO\n";
}
//cout<< run;
}


    return 0;
}
