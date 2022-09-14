#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>

using namespace std;

class Hero
{
public:
    // Property
    char *name;
    int health;
    int rank;
    static int timeToComplete;

    static void random()
    {
        // Below line will throw error as it only can access static data members
        // cout << this->health << endl;
        cout << timeToComplete << endl;
    }

    Hero()
    {
        cout << "Default constructor called" << endl;
        name = new char[100];
    }

    Hero(int health)
    {
        this->health = health;
    }

    Hero(int health, int rank)
    {
        this->health = health;
        this->rank = rank;
    }

    // copy constructure -> & is used as pass by reference
    Hero(Hero &temp)
    {
        // Deep copy by creating new memory block to the name
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "Copy constructor called" << endl;
        this->health = temp.health;
        this->rank = temp.rank;
    }

    void print()
    {
        cout << "Name is: " << this->name << endl;
        cout << "Heath is: " << this->health << endl;
        cout << "Rank is: " << this->rank << endl;
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

    void setName(char name[])
    {
        strcpy(this->name, name);
    }
};

int Hero::timeToComplete = 5;

int main()
{
    // recommended way to access
    cout << Hero::timeToComplete << endl;

    Hero a;
    cout << a.timeToComplete << endl;

    Hero b;

    // Will update time to complete for every object
    b.timeToComplete = 10;

    cout << endl
         << a.timeToComplete << endl;
    cout << endl
         << b.timeToComplete << endl
         << endl;

    Hero::random();
}