/*

Find Unique

Given an integer array of size 2N + 1. In this given array, N numbers are present twice and one number is present only once in the array.
You need to find and return that number which is unique in the array.
Note : Given array will always contain odd number of elements.
Input format :
Line 1 : Array size i.e. 2N+1
Line 2 : Array elements (separated by space)
Output Format :
Unique element present in the array
Constraints :
1 <= N <= 10^3
Sample Input :
7
2 3 1 6 3 6 2
Sample Output :
1

*/

#include <iostream>

using namespace std;
int main()
{
    // your code goes here
    int size;
    cin >> size;
    int *input = new int[1 + size];

    for (int i = 0; i < size; i++)
        cin >> input[i];

    cout << MissingNumber(input, size);

    return 0;
}

int MissingNumber(int arr[], int size)
{
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    int i, j;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if ((i != j) && (arr[i] == arr[j]))
            {
                return arr[i];
            }
        }
    }
}
