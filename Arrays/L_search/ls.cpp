/*

Linear Search

Given a random integer array A and an element x. You need to search this element x in the given array using linear search. Return the index of element in the input.
Linear search means, we need to compare elements from the array A one by one with the element x, till we found the match or we reach the end of array. If match found, return its index, and if not return -1.
Indexing in the array starts from 0.
Input format :
Line 1 : Integer n, Array Size
Line 2 : Array elements (separated by space)
Line 3 : Element to be searched (i.e. x)
Constraints :
1 <= n <= 10^5
Sample Input 1:
7
2 13 4 1 3 6 28
3
Sample Output 1:
4
Sample Input 2:
7
2 13 4 1 3 6 28
9
Sample Output 2:
-1

*/
#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int val)
{
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == val)
        {
            return i;
        }
    }
    return -1;
}