#include <iostream>

using namespace std;

void printSumRow(int arr[][3], int row, int col)
{
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        cout << "Sum of row " << row + 1 << " is " << sum << endl;
    }
}

void printSumCol(int arr[][3], int row, int col)
{
    for (int col = 0; col < 3; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        cout << "Sum of col " << col + 1 << " is " << sum << endl;
    }
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

    printSumRow(arr, 3, 3);
    printSumCol(arr, 3, 3);
}