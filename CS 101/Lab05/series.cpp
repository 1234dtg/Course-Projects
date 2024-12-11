#include <simplecpp>

main_program
{
    float x;
    int n;
    cin >> x >> n;
    float sum = x, term_i = x;
    for (int i = 0; i < n; i++)
    {
        term_i = term_i * (-1) * (x*x) / ((2*i + 1) * (2*i + 2));
        sum += term_i;
    }
    cout << fixed;
    cout.precision(2);
    cout << sum;
}
