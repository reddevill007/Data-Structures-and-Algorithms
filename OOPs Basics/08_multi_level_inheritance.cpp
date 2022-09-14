#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Animal
{
public:
    int age;
    int weight;

    void speak()
    {
        cout << "Speaking...." << endl;
    }
};

class Dog : public Animal
{
};

class GermanShephed : public Dog
{
};

main()
{
    GermanShephed a;
    a.speak();
}