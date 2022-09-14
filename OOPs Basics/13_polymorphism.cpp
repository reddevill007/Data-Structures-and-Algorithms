#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class A
{
public:
    void sayHello()
    {
        cout << "Hello Saurabh" << endl;
    }

    void sayHello(string name)
    {
        cout << "Hello " << name << endl;
    }

    void sayHello(int n)
    {
        cout << "Hello " << n << endl;
    }
};

class B
{
public:
    int a;
    int b;

    int add()
    {
        return a + b;
    }

    void operator+(B &obj)
    {
        int val1 = this->a;
        int val2 = obj.a;
        cout << "Output: " << val1 - val2 << endl;
    }

    void operator()()
    {
        cout << "I am bracket: " << this->a << endl;
    }
};

// Run time polymorphism
class Animal
{
public:
    void speak()
    {
        cout << "Speaking..." << endl;
    }
};

class Dog : public Animal
{
public:
    // Method overriding
    void speak()
    {
        cout << "Barking..." << endl;
    }
};

int main()
{
    A obj;
    obj.sayHello();
    obj.sayHello("Shivam");
    obj.sayHello(2);

    B obj1, obj2;
    obj1.a = 4;
    obj2.a = 7;
    obj1 + obj2;
    obj1();

    Dog d;
    d.speak();
}