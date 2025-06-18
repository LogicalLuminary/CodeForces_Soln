#include <iostream>

using namespace std;
int main()
{
    int trials;
    cin>> trials;
    while(trials--){


    int n;
    cin >> n;

    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int magic=0;
    int tempj;
    int mid =0;// i.e jo double count hora hai
    for (int j = 0; j < n; j++)
    {   tempj = j;
        int min= 0;
        for (int i = 0; i < n && j < n; i++, j++)
         {
            if (arr[i][j] < min)
                min = arr[i][j];
                 
        }
        
        j=tempj;

        if(j == 0) mid = min;
        
       
    magic= magic -min; 

    }
   // cout<< magic;

    int tempi=0;
  for (int i = 0; i < n; i++)
    {
        int min= 0;
        tempi = i;
        for (int j = 0; i < n && j < n; i++, j++)
        {
            if (arr[i][j] < min)
                min = arr[i][j];
        }
    i= tempi;
    magic+= -min; 

    }

    cout<< magic+mid<<endl;
    }

    return 0;
}