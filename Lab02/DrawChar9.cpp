#include <simplecpp>

main_program
{
    int n;
    cin >> n;

    turtleSim();
    forward(n);
    right(270);
    forward(2 * n);
    right(270);
    forward(n);
    right(270);
    forward(n);
    right(270);
    forward(n);
    wait(5);
}
