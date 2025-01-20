#include <iostream>
using namespace std;

bool perfectNumber(int num)
{
    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    
    return sum == num;
}

int main()
{
    int num = 28;
    
    if (perfectNumber(num))
    {
        cout << num << " is a perfect number." << endl;
    }
    else
    {
        cout << num << " is not a perfect number." << endl;
    }
    return 0;
}
