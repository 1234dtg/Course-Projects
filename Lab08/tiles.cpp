#include <iostream>

int min_tiles(int w, int h);
int min_tiles(int w, int h)
{
    // base case, when area is 0.
    if (w == 0 || h == 0)
        return 0;
    // If n and m both are even, calculate tiles for w/2 x h/2
    // Halving both dimensions doesn't change the number of tiles
    else if (w % 2 == 0 && h % 2 == 0)
        return min_tiles(w / 2, h / 2);
    // If w is even and h is odd
    // Use a row of 1x1 tiles
    else if (w % 2 == 0 && h % 2 == 1)
        return (w + min_tiles(w / 2, h / 2));
    // If w is odd and h is even
    // Use a column of 1x1 tiles
    else if (w % 2 == 1 && h % 2 == 0)
        return (h + min_tiles(w / 2, h / 2));
    // If w and h are odd
    // add row + column number of tiles
    else
        return (w + h - 1 + min_tiles(w / 2, h / 2));
}
int main()
{
    int w, h;
    std::cin >> w >> h;
    std::cout << min_tiles(w, h) << std::endl;
    return 0;
}