#include <iostream>
using namespace std;

void greatestThree(int num1, int num2, int num3)
{
    if (num1 == num2 && num1 == num3)
    {
        cout << "All three number are equal." << endl;
    }
    else if (num1 > num2 && num1 > num3)
    {
        cout << "Number " << num1 << " is the greatest." << endl;
    }
    else if (num2 > num1 && num2 > num3)
    {
        cout << "Number " << num2 << " is the greatest." << endl;
    }
    else {
        cout << "Number " << num3 << " is the greatest." << endl;
    }
}

int main()
{
    int num1 = 100;
    int num2 = 100;
    int num3 = 100;
    greatestThree(num1, num2, num3);
    return 0;
}