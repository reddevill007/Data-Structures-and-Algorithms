#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Human
{
private:
    int age;

public:
    int height;
    int weight;

    int getWeight()
    {
        return this->weight;
    }

    void setWeight(int weight)
    {
        this->weight = weight;
    }
};

// Public mode inheritance
// Single inheritance
class Male : public Human
{
public:
    string color;

    void sleep()
    {
        cout << "Male sleeping" << endl;
    }
};

int main()
{
    Male obj;
    obj.setWeight(85);
    // throws error as age is private
    // cout << obj.age << endl;
    cout << obj.weight << endl;
    cout << obj.height << endl;
    cout << obj.color << endl;
    obj.sleep();
}