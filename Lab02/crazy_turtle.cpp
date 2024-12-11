#include <simplecpp>

main_program
{

    float r1 = 59, r2 = 29, r3 = 13, r4 = 2.1, r5 = 1.7;
    float th1 = 0, th2 = 0, th3 = 0, th4 = 0, th5 = 0;
    float om1 = 2, om2 = 3, om3 = 7, om4 = 11, om5 = 17;

    turtleSim();
    penUp();
    right(90);
    //Thetas track the current local-rotation at each joint

    repeat(int(360))
    {
        //currently at fixed joint of r1.
        //arm1 is at a rotation of th1 about it's fixed joint
        //(w.r.t intial orientation)
        right(th1);
        forward(r1);

        right(th2);
        forward(r2);

        right(th3);
        forward(r3);

        right(th4);
        forward(r4);

        right(th5);
        forward(r5);

        //reached the tip

        right(90);
        penDown();
        forward(1);
        penUp();
        right(90);

        //turn back and move towards fixed joint of r1 (while updating thetas at each joint)
        // This is the phase that actually causes rotation at each joint.

        forward(r5);
        right(-th5);
        th5 += om5;

        forward(r4);
        right(-th4);
        th4 += om4;

        forward(r3);
        right(-th3);
        th3 += om3;

        forward(r2);
        right(-th2);
        th2 += om2;

        forward(r1);
        right(-th1);
        th1 += om1;

        right(180);
    }
    wait(10);
    closeTurtleSim();
}
