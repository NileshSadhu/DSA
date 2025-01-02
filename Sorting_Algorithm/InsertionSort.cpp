#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

int main() {
    int arr[10] = {1, 21, 12, 5, 61, 17, 8, 91, 31, 99};
    int size = sizeof(arr)/sizeof(int);
    
    InsertionSort(arr, size);
    
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}
