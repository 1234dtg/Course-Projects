#include <simplecpp>
main_program
{
    int n = 1;
    int t0 = 0, t1 = 1;
    cin >> n;
    repeat(n)
    {
        repeat(t1)
        {
            cout << "*";
        }
        cout << "\n";
        t1 = t1 + t0;
        t0 = t1 - t0;
    }
}
