#include <iostream>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        int arr[2*n];
        int score = 0;
        for (int i = 0; i < 2*n; i++)
        {
            cin >> arr[i];
        }

        for (int j = 0; j < n; j++)
        {

            int max = -1;
            int maxidx = -1;
            int secmax = -1;
            int secmaxidx = -1;

            for (int i = 0; i < 2*n; i++)
            {
                if (arr[i] >= max)
                {
                    secmax = max;
                    secmaxidx = maxidx;
                    max = arr[i];
                    maxidx = i;
                }
                else if (arr[i] >= secmax)
                {
                    secmax = arr[i];
                    secmaxidx = i;
                }
            }

            score += secmax;

            arr[maxidx] = -1;
            arr[secmaxidx] = -1;
        }
    cout<< score<<endl;



    }
    return 0;
}
