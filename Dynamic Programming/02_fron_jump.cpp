/*
    There is a frog on the '1st' step of an 'N' stairs long staircase. The frog wants to reach the 'Nth' stair.
    'HEIGHT[i]' is the height of the '(i+1)th' stair.If Frog jumps from 'ith' to 'jth' stair, the energy lost
    in the jump is given by absolute value of ( HEIGHT[i-1] - HEIGHT[j-1] ). If the Frog is on 'ith' staircase,
    he can jump either to '(i+1)th' stair or to '(i+2)th' stair. Your task is to find the minimum total energy
    used by the frog to reach from '1st' stair to 'Nth' stair.
*/

#include <bits/stdc++.h>

int f(int n, vector<int> &heights, vector<int> &dp)
{
    if (n == 0)
        return 0;

    if (dp[n] != -1)
        return dp[n];

    int left = f(n - 1, heights, dp) + abs(heights[n] - heights[n - 1]);

    int right = INT_MAX;
    if (n > 1)
        right = f(n - 2, heights, dp) + abs(heights[n] - heights[n - 2]);

    return dp[n] = min(left, right);
}

int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    vector<int> dp(n + 1, -1);

    return f(n - 1, heights, dp);
}

int frogJump2(int n, vector<int> &heights)
{
    // Write your code here.
    int prev = 0, prev2 = 0;

    for (int i = 1; i < n; i++)
    {
        int fs = prev + abs(heights[i] - heights[i - 1]);
        int ss = INT_MAX;

        if (i > 1)
        {
            ss = prev2 + abs(heights[i] - heights[i - 2]);
        }

        int curri = min(fs, ss);

        prev2 = prev;
        prev = curri;
    }

    return prev;
}