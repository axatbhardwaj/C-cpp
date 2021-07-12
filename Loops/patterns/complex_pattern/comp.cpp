/*
Code : Triangle of Numbers
Send Feedback
Print the following pattern for the given number of rows.
Pattern for N = 3
      1
     232
    34543

Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Sample Input :
5
Sample Output :
           1
          232
         34543
        4567654
       567898765
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        int b = n - i;
        while (j <= b)
        {
            cout << " ";
            j++;
        }

        int k = 1;
        int val = i;

        while (k <= i)
        {
            cout << val;
            k++;
            val++;
        }

        val = val - 2;

        while (val >= i)
        {
            cout << val;
            val--;
        }

        i++;
        cout << endl;
    }
}