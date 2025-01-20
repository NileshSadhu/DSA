#include <iostream>
#include <math.h>
using namespace std;

bool perfectSquare(int num)
{
    if (num > 0)
    {
        int root = sqrt(num);
        return (root * root) == num;
    }

    return false;
}

int main()
{
    int num = 16;

    if (perfectSquare(num))
    {
        cout << num << " is a perfect square." << endl;
    }
    else
    {
        cout << num << " is not a perfect square." << endl;
    }
    return 0;
}
