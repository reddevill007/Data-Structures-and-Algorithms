#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, string> m;

    m[1] = "Saurabh";
    m[2] = "Pandey";
    m[8] = "Inertia";

    m.insert({5, "Bheem"});

    cout << "Before erase: " << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << "Finding 13: " << m.count(13) << endl;

    m.erase(5);
    cout << "After erase: " << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    auto it = m.find(1);

    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << endl;
    }
}