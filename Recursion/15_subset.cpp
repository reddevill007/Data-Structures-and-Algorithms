#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans)
{
    if (index >= nums.size())
    {
        ans.push_back(output);
        return;
    }

    // exclude
    solve(nums, output, index + 1, ans);

    // include
    int el = nums[index];
    output.push_back(el);
    solve(nums, output, index + 1, ans);
}

vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;

    solve(nums, output, index, ans);

    return ans;
}

int main()
{
    vector<int> input = {1, 2, 3};

    vector<vector<int>> arr = subsets(input);

    cout << "The Subsets of vector: ";
    for (int i = 0; i < input.size(); i++)
    {
        cout << input[i] << " ";
    }
    cout << " is" << endl;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "," << endl;
    }
}