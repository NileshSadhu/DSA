#include <iostream>
using namespace std;

// Problem statement
// For a given two-dimensional integer array/list ‘ARR’ of size (N x M), 
// print the ‘ARR’ in a sine wave order, i.e., print the first column top to bottom, next column bottom to top, and so on.

// For eg:-
// The sine wave for the matrix:-
// 1 2
// 3 4
// will be [1, 3, 4, 2].

int main () {
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int mCols = 4;
    int nRows = 3;
    
    for (int col=0; col<mCols; col++)
    {
        if ( col&1 )
        {
            for (int row = nRows - 1; row >= 0; row--)
            {
                cout << arr[row][col] << " ";
                // ans.push_back( arr[row][col] );
            }
        }
        else
        {
            for (int row = 0; row < nRows; row++)
            {
                cout << arr[row][col] << " ";
                // ans.push_back( arr[row][col] );
            }
        }
    }
    
    return 0;
}