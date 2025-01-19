#include <iostream>
using namespace std;

int fibonaaci(int num)
{
    int a = 0;
    int b = 1;
    int c;

    for (int i = 0; i < num - 2; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main()
{
    int num = 6;
    cout << "Nth number : " << fibonaaci(num);
    return 0;
}