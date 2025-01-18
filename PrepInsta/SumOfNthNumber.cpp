#include <iostream>
using namespace std;

int SumOf (int num)
{
    int sum = 0;
    // for (int i=0; i <= num; i++)
    // {
    //     sum += i;
    // }
    
    sum = num * (num + 1) / 2;
    
    return sum;
}

int main()
{
    int num;
    cout << "Enter a num: ";
    cin >> num;

    cout << "Sum of " << num << " is : " << SumOf(num) << endl;
    return 0;
}