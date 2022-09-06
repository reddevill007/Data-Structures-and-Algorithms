#include <iostream>
#include <vector>

using namespace std;

bool isAP(vector<int> v)
{
    int n = v.size();

    if (n == 1)
    {
        return true;
    }

    int d = v[1] - v[0];

    for (int i = 2; i < n; i++)
    {
        if (v[i] - v[i - 1] != d)
        {
            return false;
        }
    }
    return true;
}

int nextTermAP(vector<int> v)
{
    int d = v[1] - v[0];
    return (v.back() + d);
}

float sumOfAP(vector<float> v)
{
    float n = v.size();
    float d = v[1] - v[0];
    float a = v.front();

    cout << n << " " << d << " " << a << endl;

    float sum = (n / 2) * (2 * a + (n - 1) * d);
    cout << sum << endl;

    return sum;
}

int main()
{
    vector<int> arr = {1, 3, 5, 7, 9};
    vector<float> ar = {1, 3, 5, 7, 9};

    if (isAP(arr))
    {
        cout << "Next term of AP is: " << nextTermAP(arr) << endl;
        cout << "Sum of AP is: " << sumOfAP(ar) << endl;
    }

    else
    {
        cout << "The given series is not an AP" << endl;
    }
}