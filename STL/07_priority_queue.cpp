#include <iostream>
#include <queue>

using namespace std;

int main()
{
    // Max heap
    priority_queue<int> maxi;

    // Min heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(0);
    maxi.push(11);
    maxi.push(3);
    maxi.push(44);

    int n = maxi.size();

    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    mini.push(0);
    mini.push(11);
    mini.push(3);
    mini.push(44);

    int m = mini.size();

    for (int i = 0; i < n; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;

    cout << "Mini is empty or not? " << mini.empty() << endl;
    cout << "Maxi is empty or not? " << maxi.empty() << endl;
}