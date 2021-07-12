#include <iostream>
using namespace std;

int main()
{
    int cur_sum = 0;
    int max_sum = 0;
    int lmax = -1;
    int rmax = -1;
    int n;
    cin >> n;
    int arr[100];

    for (int x = 0; x < n; x++)
    {
        cin >> arr[x];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cur_sum += arr[k];
                if (cur_sum > max_sum)
                {
                    max_sum = cur_sum;
                    lmax = i;
                    rmax = j;
                }
            }
            cur_sum = 0;
        }
    }

    cout << max_sum << endl;
    for (int i = lmax; i <= rmax; i++)
    {
        cout << arr[i] << ",";
    }
}
