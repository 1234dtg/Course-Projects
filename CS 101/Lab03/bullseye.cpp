#include <simplecpp>

main_program
{
    initCanvas();
    int r1 = 20, r2 = 60, r3 = 100, r4 = 140, r5 = 180, x = 250, y = 250;
    Circle c5(x, y, r5);
    c5.setColor(COLOR("black"));
    c5.setFill();
    Circle c4(x, y, r4);
    c4.setColor(COLOR("yellow"));
    c4.setFill();
    Circle c3(x, y, r3);
    c3.setColor(COLOR("black"));
    c3.setFill();
    Circle c2(x, y, r2);
    c2.setColor(COLOR("yellow"));
    c2.setFill();
    Circle c1(x, y, r1);
    c1.setColor(COLOR("red"));
    c1.setFill();
    wait(5);
}
