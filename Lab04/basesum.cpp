#include <simplecpp>

main_program
{
    int sum = 0, n1, b1, n2, b2;
    cin >> b1 >> n1 >> b2 >> n2;
    int i = 0;
    float n = 0;
    while (n1 != 0)
    {
        n += (n1 % 10) * pow(b1, i);
        n1 /= 10;
        i++;
    }
    i = 0;
    while (n2 != 0)
    {
        n += (n2 % 10) * pow(b2, i);
        n2 /= 10;
        i++;
    }
    n += sum;
    cout << n;
}
