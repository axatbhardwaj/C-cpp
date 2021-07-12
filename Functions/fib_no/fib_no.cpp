/*

Fibonacci Number

Given a number N, figure out if it is a member of fibonacci series or not. Return true if the number is member of fibonacci series else false.
Fibonacci Series is defined by the recurrence
    F(n) = F(n-1) + F(n-2)
Input Format :
Integer N
Output Format :
true or false
Sample Input 1 :
5
Sample Output 1 :
true
Sample Input 2 :
14
Sample Output 2 :
false

*/

#include <iostream>
using namespace std;

bool isfib(int n)
{
    int k = 1;
    int x = 1;
    int j = 1;
    int q = 0;

    if (n == 0)
    {
        return true;
    }

    for (int i = 1; i <= n - 2; i++)
    {
        q = j + x;
        x = j;
        j = q;

        if (q == n)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    isfib(8);
}