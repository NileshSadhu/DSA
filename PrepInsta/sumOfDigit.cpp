#include <iostream>
using namespace std;

int sumofDigit(int num)
{
    int sum = 0;
    
    while (num != 0)
    {
        sum += num % 10;
        num = num / 10;
    }
    
    return sum;
}

int main()
{
    int num = 1234;
    
    cout << "Sum of " << num << " is : " << sumofDigit(num);
    return 0;
}