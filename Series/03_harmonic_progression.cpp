#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool checkIsHP(vector<double> arr)
{
    int n = arr.size();

    if (n == 1)
    {
        return true;
    }

    // Find reciprocal of arr[]
    vector<int> rec;
    for (int i = 0; i < n; i++)
    {
        cout << rec[i] << endl;
    }

    sort(rec.begin(), rec.end());

    int d = (rec[1]) - (rec[0]);
    for (int i = 2; i < n; i++)
    {
        if (rec[i] - rec[i - 1] != d)
        {
            return false;
        }
    }

    return true;
}

double nextTermHP(vector<double> arr)
{
    int n = arr.size();

    vector<int> rec;
    for (int i = 0; i < n; i++)
    {
        rec.push_back((1 / arr[i]));
    }

    for (int i = 0; i < n; i++)
    {
        cout << rec[i] << endl;
    }

    double d = rec[1] - rec[0];

    double next = rec[n] + d;
    cout << next << " is next ap" << endl;

    return 1 / next;
}

int main()
{
    vector<double> arr = {1 / 5, 1 / 10, 1 / 15, 1 / 20, 1 / 25};
    cout << "I am main ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }

    if (checkIsHP(arr))
    {
        cout << "Next term of given HP is: " << nextTermHP(arr) << endl;
    }
    else
    {
        cout << "The given series is not HP" << endl;
    }
}
