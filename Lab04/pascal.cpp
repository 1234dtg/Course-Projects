#include <simplecpp>
main_program
{
    int row, i, j, coff;
    cin >> row;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (j == 0)
                coff = 1;
            else
                coff = coff * (i - j + 1) / j;
            cout << coff << " ";
        }
        cout << endl;
    }
    return 0;
}
