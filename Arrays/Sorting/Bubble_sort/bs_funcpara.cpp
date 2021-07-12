#include <iostream>
using namespace std;

bool compare(int a, int b)
{
    return a > b;
}

void fbub_sort(int arr[], int n, bool (&comp)(int a, int b))
{

    for (int a = 0; a < n; a++)
    {
        int itr = a + 1;
        for (int j = 0; j < n - itr; j++)
        {
            if (comp(arr[j], arr[j + 1]))
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    fbub_sort(arr, n, compare);

    for (int a = 0; a < n; a++)
        cout << arr[a];
}