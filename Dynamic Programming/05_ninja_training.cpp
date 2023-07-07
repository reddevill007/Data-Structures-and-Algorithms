/*
    Ninja is planing this ‘N’ days-long training schedule. Each day, he can perform any one of these three activities.
    (Running, Fighting Practice or Learning New Moves). Each activity has some merit points on each day. As Ninja has
    to improve all his skills, he can’t do the same activity in two consecutive days. Can you help Ninja find out the
    maximum merit points Ninja can earn?

    You are given a 2D array of size N*3  ‘POINTS’ with the points corresponding to each day and activity. Your task
    is to calculate the maximum number of merit points that Ninja can earn.
*/

#include <bits/stdc++.h>

int f(int day, int last, vector<vector<int>> &points, vector<vector<int>> &dp)
{
    if (day == 0)
    {
        int maxi = 0;

        for (int task = 0; task < 3; task++)
        {
            if (task != last)
            {
                maxi = max(maxi, points[0][task]);
            }
        }
        return maxi;
    }

    if (dp[day][last] != -1)
        return dp[day][last];

    int maxi = 0;

    for (int task = 0; task < 3; task++)
    {
        if (task != last)
        {
            int point = points[day][task] + f(day - 1, task, points, dp);
            maxi = max(maxi, point);
        }
    }

    return dp[day][last] = maxi;
}

int ninjaTraining(int n, vector<vector<int>> &points)
{
    // Write your code here.
    vector<vector<int>> dp(n, vector<int>(4, -1));

    return f(n - 1, 3, points, dp);
}

int ninjaTraining2(int n, vector<vector<int>> &points)
{
    vector<int> dp(4, 0);

    dp[0] = max(points[0][1], points[0][2]);
    dp[1] = max(points[0][0], points[0][2]);
    dp[2] = max(points[0][1], points[0][0]);
    dp[3] = max(points[0][1],max(points[0][0], points[0][2]);

    for(int day = 1; day < n; day++) {
        vector<int> temp(4, 0);

        for (int last = 0; last < 4; last; last++)
        {
            temp[last] = 0;

            for (int task = 0; task < 3; task++)
            {
                if (task != last)
                {
                    temp[last] = max(temp[last], points[day][task] + dp[task]);
                }
            }
        }
    }

    return dp[3];
}