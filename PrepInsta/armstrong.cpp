#include <iostream>
#include <cmath>
using namespace std;

bool armstrong(int num)
{
    int og = num;
    int length = 0;
    while (num != 0)
    {
        num /= 10;
        length++;
    }
    
    num = og;
    int sum = 0;
    while (num != 0)
    {
        int rem = num % 10;
        sum += pow(rem, length); 
        num = num / 10;
    }
    
    return og == sum;
}

int main() 
{
    int num = 370;
    
    if (armstrong(num))
    {
        cout << "It's an armstrong number." << endl;
    }
    else
    {
        cout << "It's not an armstrong number." << endl;
    }
    
    return 0;
}
