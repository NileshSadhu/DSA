#include <iostream>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1) 
        return false;
        
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num = 4;
    if (isPrime(num))
    {
        cout << "It's a prime number." << endl;
    }
    else
    {
        cout << "It's not a prime number." << endl;
    }
    return 0;
}
