#include <iostream>
using namespace std;

bool isPrime(int num)
{
    // Time Complexity: O(n);
    if (num <= 1)
    {
        return false;
    }
    
    for (int i=2; i<num; i++)
    {
        if (num%i == 0)
        {
            return false;
        }
    }
    return true;
}

int main() 
{
    int num = 7;
    
    if(isPrime(num))
    {
        cout << "Number is Prime." << endl;
    }
    else {
        cout << "Number is not Prime." << endl;
    }
    return 0;
}