/*
Code : Diamond of stars
Send Feedback
Print the following pattern for the given number of rows.
Assume, N is always odd.
Pattern for N = 7
   *
  ***
 *****
*******
 *****
  ***
   *
Input format :
N (Total no. of rows and can only be odd)
Output format :
Pattern in N lines
Sample Input :
5
Sample Output :
  *
 ***
*****
 ***
  *
*/

#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int b = 0;
  if (n % 2 == 0)
  {
    cout << "Invalid input";
    exit(0);
  }

  int i = 1;

  while (i <= ((n / 2) + 1))
  {
    int q = (n / 2) + 1 - i;
    int z = 1;
    while (z <= q)
    {
      cout << " ";
      z++;
    }

    int j = 1;
    b = 2 * i - 1;
    while (j <= b)
    {
      cout << "*";
      j++;
    }
    cout << endl;

    i++;
  }
  i = 1;
  while (i <= (n / 2))
  {
    int r = 1;
    while (r <= i)
    {
      cout << " ";
      r++;
    }

    int u = 1;
    b = b - 2;
    while (u <= b)
    {
      cout << "*";
      u++;
    }
    cout << endl;
    i++;
  }
}