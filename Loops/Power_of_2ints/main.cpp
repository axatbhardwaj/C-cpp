#include <iostream>
using namespace std;

int main()
{
    int exp;
    int base, ans = 1;
    cin >> base >> exp;

    while (exp != 0)
    {
        ans *= base;
        --exp;
    }

    cout << ans;

    return 0;
}