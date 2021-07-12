#include <iostream>
using namespace std;

void selection_sort(int arr[], int n)
{
    int flag = 0;

    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i; j < n; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
                flag = 1;
            }
        }
        if (flag == 1)
        {
            swap(arr[i], arr[min]);
        }
    }
}

int main()
{

    int arr[100];
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    cout << "enter array to be sorted" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    selection_sort(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
