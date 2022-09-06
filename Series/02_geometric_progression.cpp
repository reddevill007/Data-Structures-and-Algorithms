#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

bool isGP(vector<int> v)
{
    int n = v.size();

    if (n == 1)
    {
        return true;
    }

    int r = v[1] / v[0];

    for (int i = 2; i < n; i++)
    {
        if (v[i] / v[i - 1] != r)
        {
            return false;
        }
    }
    return true;
}

int nextTermGP(vector<int> v)
{
    int r = v[1] / v[0];
    return (v.back() * r);
}

float sumOfGP(vector<float> v)
{
    float a = v.front();
    float r = v[1] / v[0];
    float n = v.size();
    return (a * (1 - pow(r, n))) / (1 - r);
}

int main()
{
    vector<int> arr = {2, 6, 18, 54};
    vector<float> ar = {2, 6, 18, 54};

    if (isGP(arr))
    {
        cout << "Next term of AP is: " << nextTermGP(arr) << endl;
        cout << "Sum of AP is: " << sumOfGP(ar) << endl;
    }

    else
    {
        cout << "The given series is not an AP" << endl;
    }
}