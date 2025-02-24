// A variadic template allows passing multiple parameters of different types.

#include <iostream>
using namespace std;

template <typename T, typename... Args>
void print(T first, Args... rest) {
    cout << first << " ";
    if constexpr (sizeof...(rest) > 0)
        print(rest...);
}

int main() {
    print(1, 2.5, "Hello", 'A');
    return 0;
}


// 🔹 sizeof...(rest) > 0 ensures recursion stops when no arguments are left.