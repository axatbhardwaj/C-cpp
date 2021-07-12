#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>

using namespace std;

int main()
{
    string str;
    cout << "Enter string" << endl;
    getline(cin, str);
    int size = str.length();
    for (int i = 0; i < size; i++)
        cout << str[i] << endl;
}
