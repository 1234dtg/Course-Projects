#include <simplecpp>

main_program
{
    char ch;
    cin >> ch;
    if ((ch >= 'A') && (ch <= 'Z'))
        cout << "uppercase";
    else if ((ch >= 'a') && (ch <= 'z'))
        cout << "lowercase";
    else
        cout << "this is not alphabet";
}
