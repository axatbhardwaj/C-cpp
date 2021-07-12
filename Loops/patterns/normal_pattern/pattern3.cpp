/*

*pattern required

when n = 4

    *
   *** 
  *****
 *******
*/

#include <iostream>

using namespace std;

int main()
{
    int i = 1, n = 0, q = 1;
    cin >> n;
    int j = n;
    while (i <= n)
    {
        int s = 1;

        while (s <= j - 1)
        {
            cout << " ";
            s++;
        }
        j--;

        int j = 1;
        while (j <= q)
        {
            cout << "*";
            j++;
        }
        q = q + 2;

        cout << endl;
        i++;
    }
}
