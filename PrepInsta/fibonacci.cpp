#include <iostream>
using namespace std;

void fibonaaci(int num)
{
    int a = 0;
    int b = 1;
    int c;

    cout << "0 1 ";
    for (int i = 0; i < num - 2; i++)
    {
        c = a + b;
        a = b;
        b = c;
        cout << c << " ";
    }
}

int main()
{
    int num = 14;
    fibonaaci(num);
    return 0;
}