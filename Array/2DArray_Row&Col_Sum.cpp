#include <iostream>
#include <limits>
using namespace std;

int largestRowSum(int arr[][3])
{
    int maxi = numeric_limits<int>::min();
    int rowIndex = -1;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        // cout << i << " row sum is : " << sum << endl;
        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = i;
        }
    }
    cout << "The Maximum sum is " << maxi << endl;
    return rowIndex;
}

int main()
{
    int arr[3][3] = {{3, 4, 11}, {2, 12, 1}, {7, 8, 7}};

    // 2D sum of row.
    // for (int i = 0; i < 3; i++) {
    //     int sum = 0;
    //     for (int j = 0; j < 3; j++) {
    //         sum += arr[i][j];
    //     }
    //     cout << i << " row sum is : " << sum << endl;
    // }

    // 2D sum of col.
    // for (int j = 0; j < 3; j++) {
    //     int sum = 0;
    //     for (int i = 0; i < 3; i++) {
    //         sum += arr[i][j];
    //     }
    //     cout << j << " col sum is : " << sum << endl;
    // }

    int ans = largestRowSum(arr);
    cout << "Max row at index : " << ans << endl;
    return 0;
}
