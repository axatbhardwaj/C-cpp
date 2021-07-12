#include <iostream>
using namespace std;

int arr[1000];

int ls(int ar[], int x, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == x)
        {
            return i;
        }
    }

    return -1;
}

int main()
{

    int n;
    cout << "Enter the size of the array :- ";
    cin >> n;

    cout << "Enter elements" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the Element you need to search for ?";
    int x;
    cin >> x;

    int ans = ls(arr, x, n);

    if (ans > 0)
    {
        cout << "Element is present at index no " << ans;
    }
    else
    {
        cout << "Element not found";
    }
}
