#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    // graph matrix based
    int adj[n + 1][m + 1];

    // graph storing list based
    vector<int> adjList[n + 1];

    for (int i = 0; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        // storing edges in graph -> SC == O(n*n)
        adj[u][v] = 1;
        adj[v][u] = 1;

        // storing edges in list -> SC == O(2E) also in case of directed graph SC == O(E)
        adjList[u].push_back(v);
        adjList[v].push_back(u); // In case of directed graph this line is not required
    }
}