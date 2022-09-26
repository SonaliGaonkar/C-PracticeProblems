#include <iostream>

int main()
{
    double num1, num2, product;
    std::cout << "Enter two numbers : ";
    std::cin >> num1 >> num2;
    product = num1 * num2;
    std::cout << "Product of two numbers is : " << product;

    return 0;
}