#include <iostream>

using namespace std;

#define PI 3.14

#define AREA(l, b) (l * b)

// Chain Macro definition
#define INSTAGRAM FOLLOWERS
#define FOLLOWERS 138

// Multi-line Macro definition
#define ELE 1, \
            2, \
            3

// Function-like Macro definition
#define min(a, b) (((a) < (b)) ? (a) : (b))

int main()
{
    int r = 5;

    double area = PI * r * r;

    cout << "Area is " << area << endl;

    // Given lengths l1 and l2
    int l1 = 10, l2 = 5, area;

    // Find the area using macros
    area = AREA(l1, l2);

    // Print the area
    cout << "Area of rectangle"
         << " is: " << area;

    cout << "I have "
         << INSTAGRAM << "K followers on Instagram!";

    // Array arr[] with elements
    // defined in macros
    int arr[] = {ELE};

    // Print elements
    cout << "Elements of Array are:\n";

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << ' ';
    }

    // Given two number a and b
    int a = 18;
    int b = 76;

    cout << "Minimum value between"
         << a << " and " << b
         << " is: " << min(a, b);
}