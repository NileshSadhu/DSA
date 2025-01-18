#include <iostream>
using namespace std;

void leapYear(int num)
{
    if (num % 400 == 0)
    {
        cout << "It's a leap year." << endl;
    }
    else if (num % 4 == 0 && num % 100 != 0)
    {
        cout << "It's a leap year." << endl;
    }
    else {
        cout << "It's not a leap year." << endl;
    }
}

int main ()
{
    int num = 2043;
    leapYear(num);
    return 0;
}