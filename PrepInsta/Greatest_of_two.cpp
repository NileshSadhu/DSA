#include <iostream>
using namespace std;

void greatest(int num1, int num2)
{
    if (num1 == num2)
    {
        cout << "Both are equal." << endl;
    }
    else if (num1 < num2)
    {
        cout << num2 << " is greater than " << num1 << endl;
    }
    else
    {
        cout << num1 << " is greater than " << num2 << endl;
    }
}

int main()
{
    int num1 = 100;
    int num2 = 100;

    greatest(num1, num2);
    return 0;
}
