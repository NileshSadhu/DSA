#include <iostream>
using namespace std;


int reverseNum(int num)
{
    int rem = 0;
    int reverse = 0;
    
    while ( num != 0)
    {
        rem = num % 10;
        reverse = (reverse * 10) + rem;
        num = num / 10;
    }
    
    return reverse;
}

int main() 
{
    int num = 999666;
    
    cout << reverseNum(num);
    return 0;
}