#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Animal
{
public:
    int age;
    int weight;

    void bark()
    {
        cout << "Barking...." << endl;
    }
};

class Human
{
public:
    string name;

    void speak()
    {
        cout << "Speaking...." << endl;
    }
};

// Multiple inheritance
class Hybrid : public Human, public Animal
{
};

int main()
{
    Hybrid h;
    h.speak();
    h.bark();
}