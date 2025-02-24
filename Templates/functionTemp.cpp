// In C++, templates allow writing generic code that works with any data type. Instead of writing separate functions or classes for different data types, you can use templates to write a single, reusable code structure.


/*
A function template allows writing a single function to perform the same operation on different data types.
*/

#include <iostream>
using namespace std;

// Function template
template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    swapValues(x, y);
    cout << "Swapped: " << x << " " << y << endl;

    double a = 3.5, b = 7.2;
    swapValues(a, b);
    cout << "Swapped: " << a << " " << b << endl;

    return 0;
}
