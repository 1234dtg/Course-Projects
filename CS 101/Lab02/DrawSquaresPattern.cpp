#include <simplecpp>
main_program
{
    int len;
    cin >> len;
    turtleSim();
    float d = 5;
    int t = 0;
    int n = 4;
    repeat(n)
    {
        repeat(n)
        {
            forward(d/2.0);
            wait(t);
            right(270);
            forward(d/2.0);
        }
        wait(t);
        right(180);
        forward(len);
        wait(t);
        right(90);
    }
    wait(5);
}