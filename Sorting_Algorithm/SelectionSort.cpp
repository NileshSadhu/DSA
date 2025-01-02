#include <iostream>
using namespace std;

void SelectionSort (int arr[], int size)
{
    // Time Complexity: O(n2) ,as there are two nested loops.
    // Space: O(1) as the only extra memory used is for temporary variables.
    for (int i=0; i<size; i++)
    {
        int minIndex = i;
        
        for (int j=i+1; j<size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main() {
    
    int arr[10] = {1, 21, 12, 5, 61, 17, 8, 91, 31, 99};
    int size = sizeof(arr)/sizeof(int);
    
    SelectionSort(arr, size);
    
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}