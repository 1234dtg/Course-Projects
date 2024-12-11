#include <simplecpp>

int coin_piles(int a, int b);

main_program{
    int a, b;
    cin >> a >> b;
    cout << coin_piles(a, b) << endl;
}

int coin_piles(int a, int b){
    if((a+b)%3 != 0){
        return false;
    }
    int m1 = min(a,b);
    int m2 = max(a,b);
    if(2*m1 < m2){
        return false;
    }
    return true;
}