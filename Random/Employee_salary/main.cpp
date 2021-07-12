#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double hra, da, allow = 0, pf;
    char grade;
    int basic;
    cin >> basic >> grade;

    if (grade == 65)
    {
        allow = 1700;
    }
    else if (grade == 66)
    {
        allow = 1500;
    }
    else
    {
        allow = 1300;
    }

    hra = (basic * 0.20);
    da = (basic * 0.50);
    pf = (basic * 0.11);

    double totalsalary = basic + hra + da + allow - pf;
    int xx = round(totalsalary);
    // cout << fixed;
    cout << xx;
    return 0;
}