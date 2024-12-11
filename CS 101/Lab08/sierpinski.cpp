#include <simplecpp>
void sierpinski(double s, int t)
{
    if (t == 0)
        return;
    double l = (s * sqrt(3)) / 8;
    l = (s / (sqrt(3) * 2));
    if (t > 1)
    {
        penUp();
        left(90);
        forward(l);
        right(90);
        penDown();
        sierpinski(s / 2, t - 1);
        penUp();
        right(90);
        forward(l);
        left(90);
        right(30);
        forward(l);
        left(30);
        penDown();
        sierpinski(s / 2, t - 1);
        penUp();
        left(150);
        forward(l);
        right(150);
        right(150);
        forward(l);
        left(150);
        penDown();
        sierpinski(s / 2, t - 1);
        penUp();
        left(30);
        forward(l);
        right(30);
    }
    penUp();
    left(90);
    forward(2 * l);
    right(90);
    penDown();
    right(60);
    forward(s);
    right(120);
    forward(s);
    right(120);
    forward(s);
    right(120);
    left(60);
    penUp();
    right(90);
    forward(2 * l);
    left(90);
    penDown();
}
main_program
{
    double s;
    int t;
    cin >> s >> t;
    turtleSim();
    sierpinski(s, t);
    hide();
    wait(2);
}