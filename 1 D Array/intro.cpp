#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Declaration of Array
    int ssn[9];
    float sc[10];
    double val[100];
    long double amount[20];
    char name[50];

    // Initialization of an array
    int x[] = {1, 4, 6, 7, 9};
    float y[] = {1.23, 5.46, 6.77};
    int arr[10] = {100, 200};  // rest of the elements will be 0

    // Reading and processing
    float temp[10];
    int n = 0;

    while(n < 10) {
        cout << "Enter the temprature of day " << n + 1 << " ";
        cin >> temp[n];
        ++n;
    }

    n = 0; // reinitializing the value of n again to 0

    while(n < 10) {
        cout << "Temprature of day " << n + 1 << " is " << temp[n] << endl; 
        n++;
    }
    return 0;
}