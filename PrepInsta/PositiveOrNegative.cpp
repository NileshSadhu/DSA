#include <iostream>
using namespace std;

void checkNumber(int num)
{
    if (num >= 0)
    {
        if (num == 0)
        {
            cout << "Number is zero. " << endl;
        }
        else
        {
            cout << "Number is positive. " << endl;
        }
    }
    else 
    {
        cout << "Number is negative. " << endl;
    }
}

int main ()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;

    checkNumber(num);
    return 0;
}