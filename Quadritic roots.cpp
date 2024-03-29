// C++ program to find all the roots of a quadratic equation

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
double a, b, c, discriminant, root1, root2, realPart, imaginaryPart;

cout << “Enter coefficients a, b and c: “;
cin >> a >> b >> c;

discriminant = b*b-4*a*c;

// condition for real and different roots
if (discriminant > 0)
{
// sqrt() function returns square root
root1 = (-b+sqrt(discriminant))/(2*a);
root2 = (-b-sqrt(discriminant))/(2*a);

cout << “root1 = ” << root1 << ” and root2 = ” << root2;
}

//condition for real and equal roots
else if (discriminant == 0)
{
root1 = root2 = -b/(2*a);

cout << “root1 = root2 = ” << root1;
}

// if roots are not real
else
{
realPart = -b/(2*a);
imaginaryPart = sqrt(-discriminant)/(2*a);
cout << “root1 = “<<realPart<< “+”<<imaginaryPart<<” and root2 = “<<realPart<< “+”<<imaginaryPart;
}

return 0;
}