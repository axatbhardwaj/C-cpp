#include <iostream>
using namespace std;

int main()
{
    int n, x;
    cin >> n;

    int sum_of_e = 0, sum_of_o = 0;

    while (n != 0)
    {
        x = n % 10;
        if (x % 2 == 0)
        {
            sum_of_e += x;
        }
        else
        {
            sum_of_o += x;
        }
        n = n / 10;
    }

    cout << sum_of_e << " " << sum_of_o;
    return 0;
}