#include <iostream>

using namespace std;

int main()
{
    int left = -1;
    int right = -1;
    int arr[100];
    int csumarr[100] = {0};

    int n = 0;
    cin >> n;

    int currentsum = 0;

    cin >> arr[0];
    csumarr[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
        csumarr[i] = arr[i] + csumarr[i - 1];
    }

    /*
    for (int i = 0; i < n; i++)
    {
        cout << csumarr[i];
    }
    */
    int maxsum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            currentsum = 0;
            currentsum = csumarr[j] - csumarr[i - 1];

            if (currentsum > maxsum)
            {
                maxsum = currentsum;
                left = i;
                right = j;
            }
        }
    }

    for (int i = left; i <= right; i++)
    {
        cout << arr[i];
    }
}
