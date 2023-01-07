/*
    Jump search technique also works for ordered lists. It
    creates a block and tries to find the element in that
    block. If the item is not in the block, it shifts the
    entire block. The block size is based on the size of the
    list. If the size of the list is n then block size will be
    √n. After finding a correct block it finds the item using a
    linear search technique. The jump search lies between linear
    search and binary search according to its performance.
*/

#include <iostream>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

// better than jump search but not better than binary search
// Time Complexity: O(√n)
// Space Complexity: O(1)

bool jump__search(int arr[], int key, int n)
{
    int start = 0;
    // the square root of array length = jump to be made
    int m = sqrt(n);
    int end = m;

    while (arr[end] <= key && start < n)
    {
        // Jumping if not inside correct block
        start = end;
        end = end + m;

        // To avoid going out of size
        if (end > n - 1)
        {
            end = n;
        }
    }

    // performin linear search in selected block
    for (int i = start; i < end; i++)
    {
        // key found
        if (arr[i] == key)
        {
            return true;
        }
    }

    // key not found
    return false;
}

int main()
{
    int arr[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 12};
    int key = 10;

    bool found = jump__search(arr, key, 12);

    if (found)
    {
        cout << "Element found" << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
}