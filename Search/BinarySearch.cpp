#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key)
{
    // Time complexity: O(log n), where n is the number of elements in the array.
    // Space complexity: O(1) for iterative version.
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (key < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{

    int arr[10] = {1, 12, 22, 35, 66, 76, 88, 89, 91, 99};
    int size = sizeof(arr) / sizeof(int);

    cout << "Element 35 found at index : " << BinarySearch(arr, size, 35) << endl;

    cout << "Element 91 found at index : " << BinarySearch(arr, size, 91) << endl;

    return 0;
}