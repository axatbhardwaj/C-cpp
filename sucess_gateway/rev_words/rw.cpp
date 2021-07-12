#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s1;
    getline(cin, s1);
    string s2;
    int len = s1.length();
    //cout << len;
    //int start = 0;
    for (int i = 0; i <= len; i++)
    {
        s2[i] = s1[i];

        if (isspace(s1[i]))
        {
            s2[i] = '\0';
        }
    
    }

    cout << s2;
}