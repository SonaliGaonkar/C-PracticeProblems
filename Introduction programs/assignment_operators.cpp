#include <iostream>

int main() {
    int a = 2;
    int b = 7;

    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";
    std::cout << "After a += b  " << "\n";

    a += b;  // a = a +b
    std::cout << "a = " << a << "\n";

    return 0;
}
