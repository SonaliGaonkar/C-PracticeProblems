#include <iostream>

int main()
{
    int num1, num2, temp;
    std::cout << "Enter first number : ";
    std::cin >> num1;
    std::cout << "Enter second number : ";
    std::cin >> num2;
    std::cout << "Numbers num1 and num2 are " << num1 << " and " << num2 << " respectively. "
              << "\n";
    temp = num1;
    num1 = num2;
    num2 = temp;
    std::cout << "Numbers num1 and num2 after swapping are " << num1 << " and " << num2 << " respectively. "
              << "\n";

    return 0;
}