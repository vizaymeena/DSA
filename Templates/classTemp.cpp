/* A class template allows defining a generic class that can work with multiple data types */

#include <iostream>
using namespace std;

// Class template
template <typename T1, typename T2>
class Pair {
    T1 first;
    T2 second;
public:
    Pair(T1 a, T2 b) : first(a), second(b) {}

    void display() {
        cout << "Pair: " << first << ", " << second << endl;
    }
};

int main() {
    Pair<int, double> p1(10, 20.5);
    p1.display();

    Pair<string, char> p2("Hello", 'A');
    p2.display();

    return 0;
}

// 🔹 Pair<int, double> – First value is int, second is double.
// 🔹 Pair<string, char> – First value is string, second is char.