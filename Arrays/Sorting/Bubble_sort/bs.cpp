#include <iostream>
using namespace std;
int itr = 1;
void bubs(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - itr); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
        itr++;
    }
}

int main()
{
    int arr[100];
    cout << "Enter the size of the array" << endl;
    int n;
    cin >> n;

    cout << "Enter array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bubs(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i];
}