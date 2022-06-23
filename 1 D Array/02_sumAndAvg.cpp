#include <bits/stdc++.h>

using namespace std;

int main()
{
    double arr[10], sum = 0.0;
    int count = 0;

    while(count < 10) {
        cout << "Enter the number ";
        cin >> arr[count];
        sum += arr[count];
        ++count;
    }

    double avg = sum / 10;

    cout << "The value of sum is " << sum << " and average is " << avg << endl;

    return 0;
}