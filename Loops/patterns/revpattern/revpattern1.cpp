/*
Code : Mirror Number Pattern
Print the following pattern for the given N number of rows.
Pattern for N = 4
      1
    12
  123
1234
Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Sample Input :
3
Sample Output :
      1 
    12
  123
  */

#include <iostream>
using namespace std;

int main()
{
    int n = 0, i = 1, val = 1, q = 0;
    cin >> n;

    while (i <= n)
    {
        int x = 1;
        while (x <= n - i)
        {
            cout << " ";
            x++;
        }
        //cout << val;
        int j = 1;
        while (j <= i)
        {
            cout << val;
            val++;
            j++;
        }
        val = 1;
        cout << endl;
        i++;
        q++;
    }
}