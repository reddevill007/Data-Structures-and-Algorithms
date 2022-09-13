#include <iostream>
#include <vector>
#include <algorithm>

// Including external class file
#include "HeroProperty.cpp"

using namespace std;

// By default access modifier is private
class Hero
{
public:
    // Property
    int health;
    int rank;

    Hero()
    {
        //  this is the address of current object or pointer to current object
        cout << "Address of this keyword  is: " << this << endl;
        cout << "constructor called" << endl;
    }

    void print()
    {
        cout << "Heath is: " << health << endl;
        cout << "Rank is: " << rank << endl;
    }

    int getHealth()
    {
        return health;
    }

    int getRank()
    {
        return rank;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setRank(int r)
    {
        rank = r;
    }
};

int main()
{
    // object creation -> static allocation
    Hero ramesh;

    cout << "Address of ramesh is: " << &ramesh << endl;

    // object creation -> static allocation
    Hero *ram = new Hero;

    ram->setHealth(100);
    // (*ram).setHealth(100); --> same as above
    ram->setRank(19);

    ram->print();

    // Creating external class object
    HeroProperty suresh;

    // Updating class members
    ramesh.setHealth(50);
    ramesh.setRank(10);

    // Displaying class members
    ramesh.print();

    // Size of empty class is 1 for its identification and tracking
    cout << "Size: " << sizeof(ramesh) << endl;
}