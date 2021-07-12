#include <iostream>
using namespace std;

int b_search(int key, int arr[], int size)
{
    int start = 0;
    int end = size;

    for (int i = 0; i < size; i++)
    {
        int mid = (start + end) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            end = mid;
        }
        else
        {
            start = mid;
        }
    }
    return -1;
}

int main()
{
    int arr[50];
    int size;
    cout << "Enter size of Array" << endl;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int k = 0;
    cout << "Enter the key element" << endl;
    cin >> k;

    int ans = b_search(k, arr, size);
    cout << ans;
}