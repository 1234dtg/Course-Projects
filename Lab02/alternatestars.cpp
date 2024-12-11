#include <simplecpp>

main_program
{
    int n;
    cin >> n;
    repeat(n)
    {
        int i = 0;
        repeat(n)
        {
            cout << "*";
            i++;
            if (i != n)
                cout << " ";
        }
        cout << endl;
        repeat(n - 1)
        {
            cout << " *";
        }
        cout << endl;
    }
}
