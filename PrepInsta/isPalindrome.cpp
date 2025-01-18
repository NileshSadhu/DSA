#include <iostream>
using namespace std;

bool isPalindrome(int num)
{
    int og = num;
    int reverseNum = 0;
    int rem = 0;
    
    while (num != 0)
    {
        rem = num % 10;
        reverseNum = (reverseNum * 10) + rem;
        num = num / 10;
    }
    
    if ( og == reverseNum)
        return true;

    return false;
}

int main()
{
    int num = 121;
    
    if (isPalindrome(num))
    {
        cout << "Its a Palindrome." << endl;
    }
    else
    {
        cout << "Its not a Palindrome." << endl;
    }
    return 0;
}