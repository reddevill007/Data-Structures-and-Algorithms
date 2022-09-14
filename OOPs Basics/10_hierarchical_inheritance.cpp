#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Hierarchical Inheritance
class A
{
public:
    void fun1()
    {
        cout << "Inside class A." << endl;
    }
};

class B : public A
{
public:
    void fun2()
    {
        cout << "Inside class B." << endl;
    }
};

class C : public A
{
public:
    void fun3()
    {
        cout << "Inside class C." << endl;
    }
};

int main()
{
    A obj1;
    obj1.fun1();

    B obj2;
    obj2.fun1();
    obj2.fun2();

    C obj3;
    obj3.fun1();
    obj3.fun3();
}