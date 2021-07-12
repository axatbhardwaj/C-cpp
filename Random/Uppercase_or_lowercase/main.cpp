#include <iostream>

using namespace std;

int main()
{
    char ch;
    cin >> ch;
    if (ch >= 65 && ch <= 90)
    {
        cout << 1; //* Uppercase
    }
    else if (ch <= 122 && ch >= 97)
    {
        cout << 0; //* lower case
    }
    else
    {
        cout << -1; //* invalid character
    }

    return 0;
}