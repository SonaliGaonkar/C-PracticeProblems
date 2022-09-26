#include <iostream>

int main(){
    char value;
    std::cout << "Enter value : ";
    std::cin >> value;
    std::cout << "ASCII value of " << value << " is "<< int(value);
    return 0;
}