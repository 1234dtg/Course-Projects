#include <iostream>

int func(int n)
{
    if (n == 0 || n == 1 || n == 2)
        return 1;
    else
        return func(n - 1) + func(n - 2) + func(n - 3);
}
int main()
{
    int n;
    std::cin >> n;
    std::cout << func(n) << std::endl;
}