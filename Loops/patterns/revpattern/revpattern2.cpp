/*
Code : Inverted Number Pattern
Send Feedback
Print the following pattern for the given N number of rows.
Pattern for N = 4
4444
333
22
1
Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Sample Input :
5
Sample Output :
55555 
4444
333
22
1
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = n;
    int val = n;
    while (i >= 0)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i;
            j++;
        }
        i--;
        cout << endl;
    }
}