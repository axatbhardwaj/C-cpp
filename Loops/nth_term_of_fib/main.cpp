/*
Nth Fibonacci Number
Send Feedback
Nth term of fibonacci series F(n) is calculated using following formula -
    F(n) = F(n-1) + F(n-2), 
Provided N you have to find out the Nth Fibonacci Number. Also F(1) = F(2) = 1.
Input Format :
Integer n
Constraints:
Time Limit: 1 second
Output Format :
Nth Fibonacci term i.e. F(n)
Sample Input :
4
Sample Output :
3 
*/

#include <iostream>
using namespace std;

int main()
{
    int x = 1;
    int q = 0;
    int n;
    cin >> n;
    int j = 1;

    for (int i = 1; i <= n - 2; i++)
    {
        q = j + x;
        x = j;
        j = q;
    }

    cout << q;
}