/*

    *pattern required*
when n = 4
    1
   23
  345
 4567
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
        val = val - q;
        cout << endl;
        i++;
        q++;
    }
}