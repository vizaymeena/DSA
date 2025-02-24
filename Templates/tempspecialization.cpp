// Sometimes, we need to customize templates for a specific data type.

#include <iostream>
using namespace std;

template <typename T>
class Data {
public:
    void show(T value) {
        cout << "Value: " << value << endl;
    }
};

// Specialization for char*
template <>
class Data<char*> {
public:
    void show(char* value) {
        cout << "String: " << value << endl;
    }
};

int main() {
    Data<int> d1;
    d1.show(10);   // Generic template

    Data<char*> d2;
    d2.show("Hello");  // Specialized template

    return 0;
}


//🔹 Specialized version handles char* differently.