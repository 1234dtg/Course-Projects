#include <simplecpp>

main_program
{
    int n, a, b;
    double sum_val = 0, p;
    cin >> n >> p;
    for(int i=0; i<n; i++)
    {
        cin >> a >> b;
        sum_val += pow(abs(a - b), p);
    }
    
    cout << fixed;
    cout.precision(2);
    
    cout << pow(sum_val, (1.0 / p)) << "\n";
}
