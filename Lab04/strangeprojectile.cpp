#include <simplecpp>

main_program
{
    initCanvas("Projectile", 500, 500);
    int start = getClick();
    Circle p(start / 65536, start % 65536, 5); // at click position
    p.penDown();                               // let us see its path

    double a = 0, b = 1; //,polarity=-1;
    double vx = 1, vy = -b, gravity = 0.1;

    for(int i=0; i<6; i++)
    {

        int steps = int(ceil(2.0 * b / gravity)+1);    // time of flight
        for(int j=0; j<steps; j++)
        {
            p.move(vx, vy);
            vy += gravity;
            wait(0.01);
        }
        b = a + b;
        a = b - a;
        vy = -b;
    }
    getClick(); // wait for the user to click. Only then terminate.
}
