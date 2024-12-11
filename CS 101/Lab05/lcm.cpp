#include <simplecpp>

main_program
{
    int a, b, gcd, lcm;
    cin >> a;
    cin >> b;
    int x, y, t;
    x = a;
    y = b;
    while (y != 0)
    {
        t = y;
        y = x % y;
        x = t;
    }
    gcd = x;
    lcm = (a * b) / gcd;

    cout << lcm;
}
