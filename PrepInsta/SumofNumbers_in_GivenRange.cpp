#include <iostream>
using namespace std;

int sumInRange(int num1, int num2)
{
    int sum = 0;
    for (int i = num1; i <= num2; i++)
    {
        sum += i;
    }
    return sum;
}

int main() 
{
    int num1;
    int num2;

    cout << "Enter num1 : ";
    cin >> num1;

    cout << "Enter num2 : ";
    cin >> num2;
    
    cout << "Sum from range " << num1 << " to " << num2 << " is " << sumInRange(num1, num2);
    return 0;
}