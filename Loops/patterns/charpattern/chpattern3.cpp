/*
Code : Interesting Alphabets
Print the following pattern for the given number of rows.
Pattern for N = 5
E
DE
CDE
BCDE
ABCDE
Input format : N (Total no. of rows)

Output format : Pattern in N lines

Sample Input :
8
Sample Output :
H
GH
FGH
EFGH
DEFGH
CDEFGH
BCDEFGH
ABCDEFGH
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << endl;
    char ch = 'A';
    char x = ch + n - 1;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << x;
            j++;
            x++;
        }
        x = x - j;
        cout << endl;
        i++;
    }
}

/*
* CN assig ans
void printPatt(int n)
{
    cin >> n;
    cout << endl;
    char ch = 'A';
    char x = ch + n - 1;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << x;
            j++;
            x++;
        }
        x = x - j;
        cout << endl;
        i++;
    }
}

*/