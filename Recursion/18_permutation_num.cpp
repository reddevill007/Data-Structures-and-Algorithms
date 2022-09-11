#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(vector<int> nums, vector<vector<int>> &ans, int index)
{
    if (index >= nums.size())
    {
        ans.push_back(nums);
        return;
    }

    for (int j = index; j < nums.size(); j++)
    {
        swap(nums[index], nums[j]);
        solve(nums, ans, index + 1);
        swap(nums[index], nums[j]);
    }
}

vector<vector<int>> permute(vector<int> &nums)
{
    vector<vector<int>> ans;
    int index = 0;
    solve(nums, ans, index);
    return ans;
}

int main()
{
    vector<int> input = {1, 2, 3};
    vector<vector<int>> arr = permute(input);

    cout << "The Permutations of vector: ";
    for (int i = 0; i < input.size(); i++)
    {
        cout << input[i] << " ";
    }
    cout << " are" << endl;
    cout << "{ ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << "[ ";
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "], ";
    }
    cout << "}" << endl;
}