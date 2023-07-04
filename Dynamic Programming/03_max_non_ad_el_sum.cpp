/*
    You are given an array/list of ‘N’ integers. You are supposed to return the maximum sum of the subsequence
    with the constraint that no two elements are adjacent in the given array/list.
*/

#include <bits/stdc++.h>

int maximumNonAdjacentSum(vector<int> &nums)
{
    // Write your code here.

    int prev2 = 0;
    int prev = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        int take = nums[i] + prev2;
        int notTake = 0 + prev;

        int curri = max(take, notTake);

        prev2 = prev;
        prev = curri;
    }

    return prev;
}