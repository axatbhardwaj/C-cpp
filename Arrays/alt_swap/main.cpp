/*

Swap Alternate

Given an array of length N, swap every pair of alternate elements in the array.
You don't need to print or return anything, just change in the input array itself.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Output Format :
Elements after swapping, separated by space.
Sample Input 1:
6
9 3 6 12 4 32
Sample Output 2 :
3 9 12 6 32 4
Sample Input 1:
9
9 3 6 12 4 32 5 11 19
Sample Output 2 :
3 9 12 6 32 4 11 5 19

*/

void swapAlternate(int arr[], int size)
{

    /* Don't write main().
     Don't read input, it is passed as function argument.
     Taking input and printing output is handled automatically.
  */

    for (int i = 0; i < size; i++)
    {
        if (i == 0 && (i + 1) < size || i % 2 == 0 && (i + 1) < size)
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}
