#include <simplecpp>

int knights(int k);

main_program{
    int n;
    cin >> n;
    cout << knights(n) << endl;
}

int knights(int k){
    int ans, n2;
    n2 = k*k;
    ans = n2*(n2-1);
    ans /= 2;
    ans -= 4*(k-1)*(k-2);
    return ans;
}