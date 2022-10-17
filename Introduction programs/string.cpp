#include <iostream>
int main()
{
    char hello[100];
    std::cout << "Enter string : ";
    std::cin.get(hello, 100);
    std::cout << hello;
    return 0;
}