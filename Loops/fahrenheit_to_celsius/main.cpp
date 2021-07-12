#include <iostream>
using namespace std;

int main()
{
    int S;
    cout << "Enter starting Fahrenheit value" << endl;
    cin >> S;

    int E;
    cout << "Enter last Fahrenheit value " << endl;
    cin >> E;

    int W;
    cout << "Enter Interval size" << endl;
    cin >> W;

    int z = 0;

    while (S <= E)
    {
        z = ((S - 32) * (5) / 9);

        cout << S << "\t" << z << endl;
        S = S + W;
    }

    return 0;
}