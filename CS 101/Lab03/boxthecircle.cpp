#include <simplecpp>

main_program
{

    initCanvas();
    int xc = 200, yc = 200;
    int c_rad = 50;
    Circle c1(xc, yc, c_rad);
    int p1 = getClick(), p2 = getClick();
    int x1 = p1 / 65536, x2 = p2 / 65536;
    int y1 = p1 % 65536, y2 = p2 % 65536;
    Line l1(x1, y1, x2, y2);

    double dy = y2 - y1, dx = x2 - x1;

    double flag = min(abs(dx), 1.0);
    dy *= flag;
    dx += 1.0 - flag;

    Rectangle s1(xc, yc, 2 * c_rad);
    s1.rotate(atan(dy / dx));

    wait(3);
}
