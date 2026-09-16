#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c, x1, x2, discriminant;

    cout << "Input the value of variable a: ";
    cin >> a;
    cout << "Input the value of variable b: ";
    cin >> b;
    cout << "Input the value of variable c: ";
    cin >> c;

    discriminant = pow(b, 2) - (4 * a * c);

    cout << "Discriminant: " << setprecision(2) << fixed << discriminant << "\n";

    if (discriminant > 0)
    {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);

        cout << "the value for x1: " << setprecision(2) << fixed << x1 << "\n";
        cout << "the value for x2: " << setprecision(2) << fixed << x2;
    }
    else if (discriminant == 0)
    {
        x1 = -b / (2 * a);
        x2 = x1;

        cout << "the value for x1: " << setprecision(2) << fixed << x1 << "\n";
        cout << "the value for x2: " << setprecision(2) << fixed << x2;
    }
    else
    {
        x1 = (-b / 2 * a) + (sqrt(abs(discriminant) / (2 * a)));
        x1 = (-b / 2 * a) + (sqrt(abs(discriminant) / (2 * a)));

        cout << "the value for x1: " << setprecision(2) << fixed << x1 << "i" << "\n";
        cout << "the value for x2: " << setprecision(2) << fixed << x2 << "i";
    }

    return 0;
}