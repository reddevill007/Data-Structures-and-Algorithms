/*
    You are given an array/list of ‘N’ integers. You are supposed to return the maximum sum of the subsequence
    with the constraint that no two elements are adjacent in the given array/list.


    198. House Robber
    You are a professional robber planning to rob houses along a street. Each house has a certain amount of money
    stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security
    systems connected and it will automatically contact the police if two adjacent houses were broken into on the same night.

    Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can
    rob tonight without alerting the police.
*/

#include <bits/stdc++.h>

int maximumNonAdjacentSum(vector<int> &nums)
{
    // Write your code here.

    int prev2 = 0;
    int prev = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        int take = nums[i];
        if ((i > 1))
        {
            take += prev2;
        }

        int notTake = 0 + prev;

        int curri = max(take, notTake);

        prev2 = prev;
        prev = curri;
    }

    return prev;
}