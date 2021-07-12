#include <iostream>
using namespace std;
#include <typeinfo>

int main()
{
    int s = 9;
    int x = 0;

    if (typeid(s) == typeid(x))
    {
        cout << "yes";
    }
}