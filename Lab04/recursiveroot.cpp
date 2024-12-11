#include <simplecpp>

main_program
{

    int n;
    cin >> n;

    double ans = 0;
    for(int i = 0; i < n; i++)
    {
        ans = sqrt(2 + ans);
    }

    cout << fixed;
    cout.precision(2);

    cout << ans << endl;
}
