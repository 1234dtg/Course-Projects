#include <simplecpp>

main_program
{
    int a, b, c, x, n;
    cin >> n >> a >> b >> c;
    repeat(n)
    {
        cin >> x;
        cout << a * x * x + b * x + c;
        cout << "\n";
    }
}
