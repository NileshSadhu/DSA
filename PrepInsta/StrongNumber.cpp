#include <iostream>
using namespace std;

int factorial(int ans)
{
    if (ans == 0 || ans == 1)
        return 1;

    return ans * factorial(ans - 1);
}

bool strongNumber(int num)
{
    int ans = num;
    int rem;
    int fact = 0;
    while (num != 0)
    {
        rem = num % 10;
        fact += factorial(rem);
        num /= 10;
    }

    return ans == fact;
}

int main()
{
    int num = 145;

    if (strongNumber(num))
    {
        cout << num << " is a strong number." << endl;
    }
    else
    {
        cout << num << " is not a strong number." << endl;
    }
    return 0;
}
