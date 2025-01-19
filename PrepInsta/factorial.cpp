#include <iostream>
using namespace std;

int factorial(int num)
{
    // method 1
    // int fact = 1;
    // for (int i=1; i<=num; i++)
    // {
    //     fact *= i;
    // }
    // return fact;

    // method 2
    if (num == 0)
    {
        return 1;
    }

    return num * factorial(num - 1);
}

int main()
{
    int num = 8;
    cout << "Factorial : " << factorial(num);
    return 0;
}