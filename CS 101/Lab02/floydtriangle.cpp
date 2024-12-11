#include <simplecpp>

main_program
{
    int n;
    cin >> n;
    int counter = 0;
    int line_counter = 0;
    repeat(n)
    {
        line_counter++;
        repeat(line_counter)
        {
            counter++;
            cout << counter << " ";
        }
        cout << endl;
    }
}
