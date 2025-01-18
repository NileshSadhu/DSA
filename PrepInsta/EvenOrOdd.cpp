#include <iostream>
using namespace std;

void EvenOrOdd(int num)
{
    if ((num % 2) == 0)
    {
        cout << num << " is even." << endl;
    }
    else
    {
        cout << num << " is odd." << endl;
    }
}

int main()
{
    int num;
    cout << "Enter a num to check a number is odd or even : ";
    cin >> num;

    EvenOrOdd(num);
    return 0;
}