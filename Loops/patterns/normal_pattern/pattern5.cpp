/*
Print the following pattern for the given N number of rows.
Pattern for N = 4
*
**
***
****
Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
*/

#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}