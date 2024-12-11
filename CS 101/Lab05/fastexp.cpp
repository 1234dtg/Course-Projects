#include <simplecpp>

main_program
{
    int x,n,k;
    cin >> x >> n >> k;
    int ans = 1;

    while(n != 0)
    {
        if((n % 2) == 1)
            ans = (ans * x) % k;
        x = (x * x) % k;
        n /= 2;             // Equivalently, n = n / 2
    }

    cout << ans << "\n";
}
