#include <simplecpp>

main_program
{

    double a, b, c;

    cin >> a >> b >> c;

    double discriminant = b * b - 4 * a * c;
    if (abs(discriminant) < 1e-9) // discriminant == 0 does not work due to the internal precision errors in rounding up floating-point numbers
    {
        cout << "real and same";
    }
    else if (discriminant > 0)
    {
        cout << "real and distinct";
    }
    else // discriminant < 0
    {
        cout << "complex";
    }
}
