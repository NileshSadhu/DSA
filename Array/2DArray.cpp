#include <iostream>
using namespace std;

int search2DArray(int arr[][4], int target, int row, int col)
{
    for (int row=0; row<3; row++)
    {
        for (int col=0; col<4; col++)
        {
            if (arr[row][col] == target)
            {
                return true;
            }
        }
    }
    return false;
}

int main ()
{
    // int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    // int arr1[3][3] = {1, 1, 1, 2, 2, 2, 3, 3, 3};
    int arr2[3][4];

    // Input in 2D array.
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<4; j++)
        {
            cin >> arr2[i][j];
        }
    }
    
    // Column wise input
    // for (int j=0; j<4; j++)
    // {
    //     for (int i=0; i<3; i++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }
    
    // Output in 2D array.
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<4; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    
    int userNum;
    cout << "Enter number you want to find : " ;
    cin >> userNum;
    
    if (search2DArray(arr2, userNum, 3, 4)){
        cout << "Number is present" << endl;
    }
    else {
         cout << "Number is not present" << endl;
    }
    return 0;
}