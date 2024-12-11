#include <simplecpp>
void permutation(int &a, int &b, int &c, int n);
void swap2int(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void permutation(int &a, int &b, int &c, int n)
{
    if (n == 2)
    {
        swap2int(b, c);
    }
    else if (n == 3)
    {
        swap2int(a, b);
    }
    else if (n == 4)
    {
        swap2int(a, c);
        swap2int(a, b);
    }
    else if (n == 5)
    {
        swap2int(a, c);
        swap2int(b, c);
    }
    else if (n == 6)
    {
        swap2int(a, c);
    }
}
main_program
{
    int a, b, c, n;
    cin >> a >> b >> c >> n;
    permutation(a, b, c, n);
    cout << a << " " << b << " " << c << endl;
}