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

long long int houseRobber(vactor<int> houseMoney)
{
    vector<int> temp1, temp2;

    int n = houseMoney.size();

    if (n == 1)
        return houseMoney[0];

    for (int i = 0; i < n; i++)
    {
        if (i != 0)
            temp1.push_back(houseMoney[i]);
        if (i != n - 1)
            temp2.push_back(houseMoney[i]);
    }

    return max(maximumNonAdjacentSum(temp1), maximumNonAdjacentSum(temp2));
}