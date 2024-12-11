#include <simplecpp>

int armstrong(int n);
main_program
{
    int n;
    cin >> n;
    cout << armstrong(n) << endl;
}

int armstrong(int n)
{
    int count=0;
    int max = 1e6; //any maximum number
    for(int i = 1; i <= max; i++)
    {
        int num=i, rem, digit=0, sum=0;
        num = i;
        digit = (int) log10(num) + 1;
        while(num > 0)
        {
            rem = num % 10;
            int term = round(pow(rem, digit));
            sum = sum + term;
            num = num / 10;
        }
        if(i == sum)
            count++;
        if(count==n)
            return i;
    }

    // just for sanity check, we never reach this line
    return -1;
}