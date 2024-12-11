#include <simplecpp>

main_program
{

    int year;
    cin >> year;

    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
