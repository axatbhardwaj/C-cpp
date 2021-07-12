#include <iostream>
#include <cmath> //*included cmatch for sqrt() funtion for finding square root

int main()
{
    long double b, a, c;

    std::cout << "Enter a " << std::endl;
    std::cin >> a;
    std::cout << "Enter b " << std::endl;
    std::cin >> b;
    std::cout << "Enter a " << std::endl;
    std::cin >> c;

    double x = (b * b) - (4 * a * c);
    x = abs(x);              //* abs() is a fn that chnges (+ve/-ne)no. to +ve just like MOD in maths
    double y = std::sqrt(x); //*sqrt() cannot find the root of a negative no.

    double r1 = (-b + y) / (2 * a);
    double r2 = (-b - y) / (2 * a);

    std::cout << "r1 = " << r1 << std::endl;
    std::cout << "r2 = " << r2;
}