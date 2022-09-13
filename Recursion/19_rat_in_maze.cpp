#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
private:
    bool isSafe(int x, int y, int n, vector<vector<int>> visited, vector<vector<int>> &m)
    {
        if ((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && m[x][y] == 1)
        {
            return true;
        }
        return false;
    }

    void solve(vector<vector<int>> &m, int n, vector<string> &ans, int x, int y, vector<vector<int>> visited, string path)
    {
        // base case
        if (x == n - 1 && y == n - 1)
        {
            ans.push_back(path);
            return;
        }

        visited[x][y] = 1;
        // 4 choice -> D, L, R, U
        // down
        int newx = x + 1;
        int newy = y;
        if (isSafe(newx, newy, n, visited, m))
        {
            path.push_back('D');
            solve(m, n, ans, newx, newy, visited, path);
            path.pop_back();
        }

        // left
        newx = x;
        newy = y - 1;
        if (isSafe(newx, newy, n, visited, m))
        {
            path.push_back('L');
            solve(m, n, ans, newx, newy, visited, path);
            path.pop_back();
        }

        //  right
        newx = x;
        newy = y + 1;
        if (isSafe(newx, newy, n, visited, m))
        {
            path.push_back('R');
            solve(m, n, ans, newx, newy, visited, path);
            path.pop_back();
        }

        // up
        newx = x - 1;
        newy = y;
        if (isSafe(newx, newy, n, visited, m))
        {
            path.push_back('U');
            solve(m, n, ans, newx, newy, visited, path);
            path.pop_back();
        }

        visited[x][y] = 0;
    }

public:
    vector<string> findPath(vector<vector<int>> &m, int n)
    {
        vector<string> ans;
        int srcx = 0, srcy = 0;

        if (m[0][0] == 0)
        {
            return ans;
        }

        vector<vector<int>> visited = m;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                visited[i][j] = 0;
            }
        }

        string path = "";

        solve(m, n, ans, srcx, srcy, visited, path);
        sort(ans.begin(), ans.end());

        return ans;
    }
};

int main()
{

    int n = 4;
    vector<vector<int>> m;

    // Maze
    m = {{1, 0, 0, 0},
         {1, 1, 0, 1},
         {1, 1, 0, 0},
         {0, 1, 1, 1}};

    Solution obj;
    vector<string> result = obj.findPath(m, n);
    sort(result.begin(), result.end());
    if (result.size() == 0)
    {
        cout << -1;
    }
    else
    {
        cout << "Possible solution of the maze: " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "{ ";
            for (int j = 0; j < n; j++)
            {
                cout << m[i][j] << ", ";
            }
            cout << "}," << endl;
        }
        for (int i = 0; i < result.size(); i++)
        {
            cout << result[i] << " ";
        }
    }
    cout << endl;
}