#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Hero
{
public:
    // Property
    int health;
    int rank;

    Hero()
    {
        cout << "Default constructor called" << endl;
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
    Hero suresh(70, 15);
    suresh.print();

    // copy constructor
    Hero ram(suresh);
    ram.print();
}