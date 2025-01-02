#include <iostream>
using namespace std;

void BubbleSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{

    int arr[10] = {1, 21, 12, 5, 61, 17, 8, 91, 31, 99};
    int size = sizeof(arr) / sizeof(int);

    BubbleSort(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}