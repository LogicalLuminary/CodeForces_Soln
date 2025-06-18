// #include<iostream>

// using namespace std;

// int main(){

// int trials;
// cin>> trials;
// for(int l=0;l<trials;l++){

//     int n;
//     cin>>n;
//     int arr[n];
//     for(int k=0;k<n;k++){
//         cin>> arr[k];
//     }
//     bool done =false;
//     for(int i=0;i<n;i++){
//         if(arr[i] >n-2) continue;
//         for(int j=i+1;j<n;j++){
//             if(arr[i]*arr[j]== n-2){
//                 cout<< arr[i]<<" "<<arr[j]<<endl;
//                 done =true;
//                 break;
//             }

//         }
//         if(done==true) break;
//     }

// }
//     return 0;
// }

#include <iostream>
#include <math.h>

using namespace std;

void factorise(int n, int arr[])
{

    for (int i = 1; i < sqrt(n) + 1; i++)
    {
        if (n % i == 0)
        {
            arr[i] = i;
            arr[n / i] = n / i;
        }
    }
}

int main()
{

    int trials;
    cin >> trials;
    for (int l = 0; l < trials; l++)
    {

        int n;
        cin >> n;
        int arr2[n];//input
        int arr3[n]={0};// how many times input has that element
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
            arr3[arr2[i]]++;
        }

        


        int arr[n + 1] = {0};
        factorise(n - 2, arr);
        for (int j = 0; j < n; j++)
        {
            if (arr2[j] > n - 2)
                continue;

            if (arr2[j] == arr[arr2[j]] && arr2[j] * arr2[j] != (n - 2) && arr3[(n-2)/arr2[j]]>=1)
            {
                cout << arr2[j] << " " << (n - 2) / arr2[j] << endl;
                break;
            }
            else if (arr2[j] == arr[arr2[j]] && arr2[j] * arr2[j] == (n - 2))
            {

                int count = 0;
                for (int k = 0; k < n; k++)
                {
                    if (arr2[k] == arr2[j])
                        count++;
                }
                if (count >= 2)
                {
                    cout << arr2[j] << " " << (n - 2) / arr2[j] << endl;
                    break;
                }
            }
        }
    }

    return 0;
}
