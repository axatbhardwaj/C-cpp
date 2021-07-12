#include <iostream>

using namespace std;
int main()
{
    int arr[100];
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int cs = 0;
    int ms = 0;

    for (int i = 0; i < n; i++)
    {
        cs += arr[i];

        if (cs < 0)
        {
            cs = 0;
        }

        ms = max(cs, ms);
    }
    cout << ms;
}