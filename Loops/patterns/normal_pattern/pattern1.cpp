#include <iostream>
using namespace std;

/*

    *pattern required

    when n = 4

    1
    23
    456
    78910

*/
int main()
{
    int n = 0, i = 1, val = 1, q = 0;
    cin >> n;
    while (i <= n)
    {
        //cout << val;
        int j = 1;
        while (j <= i)
        {
            cout << val;
            val++;
            j = j + 1;
        }
        val = val - q;
        cout << endl;
        i++;
        q++;
    }
}