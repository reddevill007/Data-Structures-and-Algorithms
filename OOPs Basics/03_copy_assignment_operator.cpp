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

int main()
{

    Hero hero1;
    hero1.setHealth(65);
    hero1.setRank(12);
    char name[8] = "Hanuman";
    hero1.setName(name);

    Hero hero2(hero1);

    // Hero 2 will also change this is known as shallow copy but if we make our own copy constructor then it will do deep copy
    hero1.name[0] = 'G';
    hero1.print();
    hero2.print();

    hero1 = hero2;
    hero1.print();
    hero2.print();
}