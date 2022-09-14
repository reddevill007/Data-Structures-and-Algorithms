/*
    The process of grouping data members and corresponding
    methods into a single unit is known as Encapsulation.
    It is an important part of object-oriented programming.
    We can create a fully encapsulated class by making all
    the data members private. If the data members are private,
    it can only be accessible within the class; no other
    class can access that class’s data members.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Student
{
private:
    string name;
    int age;
    int rollNo;

public:
    int getAge()
    {
        return this->age;
    }

    void setAge(int age)
    {
        this->age = age;
    }

    int getRollNo()
    {
        return this->rollNo;
    }

    void setRollNo(int rollNo)
    {
        this->rollNo = rollNo;
    }

    string getName()
    {
        return this->name;
    }

    void setName(string name)
    {
        this->name = name;
    }
};

int main()
{
    Student obj;

    obj.setName("Saurabh");
    obj.setAge(21);
    obj.setRollNo(9269);

    cout << "Student Name: " << obj.getName() << endl;
    cout << "Student Age: " << obj.getAge() << endl;
    cout << "Student Roll No: " << obj.getRollNo() << endl;
}