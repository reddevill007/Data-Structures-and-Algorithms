#include <iostream>

using namespace std;

void largestRowSum(int arr[][3], int row, int col)
{
    int maxi = INT_MIN;
    int largestRow = -1;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }

        if (sum > maxi)
        {
            maxi = sum;
            largestRow = row;
        }
    }
    cout << "The maximum sum of a row is " << maxi << " at row " << largestRow << endl;
}

void largestColSum(int arr[][3], int row, int col)
{
    int maxi = INT_MIN;
    int largestCol = -1;
    for (int col = 0; col < 3; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        if (sum > maxi)
        {
            maxi = sum;
            largestCol = col;
        }
    }
    cout << "The maximum sum of a row is " << maxi << " at column " << largestCol << endl;
}

int main()
{
    int arr[3][3];

    cout << "Enter the elements " << endl;

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }

    largestColSum(arr, 3, 3);
    largestRowSum(arr, 3, 3);
}