#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start < end)
    {
        swap(arr[start++], arr[end--]);
    }
}

int main()
{
    vector<int> arr = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    reverseArray(arr);

    cout << " Rverse Array is : ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}