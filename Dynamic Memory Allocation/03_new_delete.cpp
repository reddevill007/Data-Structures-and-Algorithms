/*
    -> C++ Memory Management: new and delete

    * C++ allows us to allocate the memory of a variable or an array in run time. This is known as dynamic memory allocation.

    * In other programming languages such as Java and Python, the compiler automatically manages the memories allocated to variables. But this is not the case in C++.

    * In C++, we need to deallocate the dynamically allocated memory manually after we have no use for the variable.

    * We can allocate and then deallocate memory dynamically using the new and delete operators respectively.

    * Syntax :-
        // declare an int pointer
        int* pointVar;

        // dynamically allocate memory
        // using the new keyword
        pointVar = new int;

        // assign value to allocated memory
        *pointVar = 45;

        // deallocate the memory
        delete pointVar;
*/

#include <iostream>
using namespace std;

int main()
{

    // declare an int pointer
    int *pointInt;

    // declare a float pointer
    float *pointFloat;

    // dynamically allocate memory
    pointInt = new int;
    pointFloat = new float;

    // assigning value to the memory
    *pointInt = 45;
    *pointFloat = 45.45f;

    cout << *pointInt << endl;
    cout << *pointFloat << endl;

    // deallocate the memory
    delete pointInt;
    delete pointFloat;

    return 0;
}