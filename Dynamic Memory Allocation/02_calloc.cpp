/*
    -> calloc() function in c++
    * The calloc() function in C++ allocates a block of memory for an array of objects and initializes all its bits to zero.

    * The calloc() function returns a pointer to the first byte of the allocated memory block if the allocation succeeds.

    * If the size is zero, the value returned depends on the implementation of the library. It may or may not be a null pointer.

    * Syntax:-
    void* calloc(size_t num, size_t size);
*/

#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
    int *ptr;
    ptr = (int *)calloc(5, sizeof(int));
    if (!ptr)
    {
        cout << "Memory Allocation Failed";
        exit(1);
    }
    cout << "Initializing values..." << endl
         << endl;
    for (int i = 0; i < 5; i++)
    {
        ptr[i] = i * 2 + 1;
    }
    cout << "Initialized values" << endl;
    for (int i = 0; i < 5; i++)
    {
        /* ptr[i] and *(ptr+i) can be used interchangeably */
        cout << *(ptr + i) << endl;
    }
    free(ptr);
    return 0;
}
