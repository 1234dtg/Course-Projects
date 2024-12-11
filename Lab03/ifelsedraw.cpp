#include <simplecpp>

main_program
{
    int user;
    cin >> user;
    turtleSim();
    if (user % 2 == 0)
    {
        right(-60);
        forward(100);
        wait(0.5);
        right(120);
        forward(100);
        wait(0.5);
        right(120);
        forward(100);
        wait(0.5);
    }
    else
    {
        forward(100);
        right(90);
        wait(0.5);
        forward(100);
        right(90);
        wait(0.5);
        forward(100);
        right(90);
        wait(0.5);
        forward(100);
    }
    wait(5);
}
