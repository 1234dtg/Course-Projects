#include <simplecpp>

int perfect(int n);

main_program{
    int n; 
    cin >> n;
    cout << perfect(n);
}

int perfect(int n){
    int sum=0;
    for(int i=1; i<n; i++)
        if(n%i == 0) 
            sum = sum + i;
    if (sum == n)
        return 1;
    else
        return 0;
}
