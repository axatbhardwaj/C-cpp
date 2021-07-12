/*
1234554321
1234**4321
123****321
12******21
1********1
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            if (j > (n - i) + 1)
            {
                cout << "*";
            }
            else
            {
                cout << j;
            }
            j++;
        }

        int k = j - 1;
        while (k >= 1)
        {
            if (k > (n - i) + 1)
            {
                cout << "*";
            }
            else
            {
                cout << k;
            }
            k--;
        }

        cout << endl;
        i++;
    }
}