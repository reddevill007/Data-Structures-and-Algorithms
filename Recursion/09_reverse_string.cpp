#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void reverseString(string &str, int s, int e)
{
    cout << "call recieved for " << str << endl;
    if (s > e)
    {
        return;
    }
    swap(str[s], str[e]);
    s++;
    e--;
    reverseString(str, s, e);
}

int main()
{
    string str = "abcde";
    int n = str.length();
    cout << n << endl;
    reverseString(str, 0, n - 1);
    cout << "Reverse string is " << str << endl;
}