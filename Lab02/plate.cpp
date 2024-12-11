#include <simplecpp>

main_program
{
    turtleSim();
    penUp();
    forward(-20);
    right(-90);
    forward(200);
    right(45);
    penDown();
    repeat(20)
    {
        forward(45);
        repeat(65)
        {
            forward(0.45);
            right(-3.6);
        }
        forward(45);
        repeat(70)
        {
            forward(0.45);
            right(3.6);
        }
    }
    wait(5);
}
