#include <iostream>

int count_ways(int n)
{
    if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    else if (n == 3)
        return 4;
    else if (n == 4)
        return 8;
    else if (n == 5)
        return 16;
    else if (n == 6)
        return 32;
    else
    {
        return count_ways(n - 1) + count_ways(n - 2) + count_ways(n - 3) + count_ways(n - 4) + count_ways(n - 5) + count_ways(n - 6);
    }
}
int main()
{
    int n;
    std::cin >> n;
    std::cout << count_ways(n) << std::endl;
}