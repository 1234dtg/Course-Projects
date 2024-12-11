#include <simplecpp>
main_program
{
    turtleSim();
    float R = 20;
    float fwd = 2 * PI * R / 360.;
    repeat(6)
    {
        repeat(60)
        {
            // 60 degree arc
            forward(fwd);
            left(1);
        }
        repeat(360)
        {
            // Full circle
            forward(fwd);
            right(1);
        }
    }
    wait(10);
}
