#include <simplecpp>

void hilbert(double s, int t, int angle)
{
    if (t == 0)
        return;
    right(angle);
    hilbert(s, t - 1, -angle);
    forward(s);
    left(angle);
    hilbert(s, t - 1, angle);
    forward(s);
    hilbert(s, t - 1, angle);
    left(angle);
    forward(s);
    hilbert(s, t - 1, -angle);
    right(angle);
}
main_program
{
    double s;
    int t;
    cin >> s >> t;
    turtleSim();
    hilbert(s, t, 90);
    hide();
    wait(2);
}