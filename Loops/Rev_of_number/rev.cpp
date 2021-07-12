/*

Reverse of a number

Write a program to generate the reverse of a given number N. Print the corresponding reverse number.
Input format :
Integer N
Constraints:
Time Limit: 1 second
Output format :
Corresponding reverse number
Constraints:
N is always greater than or equal to 0
Sample Input 1 :
1234
Sample Output 1 :
4321
Sample Input 2 :
1980
Sample Output 2 :
891

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int rev = 0;
    while (n > 0)
    {
        int x = n % 10;
        rev = (rev * 10) + x;
        n /= 10;
    }
    cout << rev;
}