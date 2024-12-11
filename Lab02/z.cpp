#include <simplecpp>
main_program
{
    int n, i = 0;
    cin >> n;
    repeat(n)
    {
        cout << "*";
    }
    cout << "\n";
    i = n - 2;
    repeat(n - 2)
    {
        repeat(i)
        {
            cout << " ";
        }
        cout << "*";
        i--;
        cout << "\n";
    }
    repeat(n)
    {
        cout << "*";
    }
}
