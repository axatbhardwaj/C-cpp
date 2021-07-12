#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    float a,b,c,r1,r2;

    cout<<"Enter the co-efficients: ";
    cin>>a>>b>>c;

    r1 = (-b+sqrt(b*b-4*a*c))/(2*a);
    r2 = (-b-sqrt(b*b-4*a*c))/(2*a);

    cout<<"Roots are "<< r1 <<" "<< r2;

    return 0;
}
