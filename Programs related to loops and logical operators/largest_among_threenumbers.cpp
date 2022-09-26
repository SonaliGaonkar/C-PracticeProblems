#include <iostream>

int main()
{
    int num1, num2, num3;
    std::cout << "Enter three numbers : ";
    std::cin >> num1 >> num2 >> num3;
    if (num1 > num2 && num1 > num3)
    {
        std::cout << num1 << " is greater than " << num2 << " and " << num3;
    }
    else if (num2 > num1 && num2 > num3)
    {
        std::cout << num2 << " is greater than " << num1 << " and " << num3;
    }
    else
    {
        std::cout << num3 << " is greater than " << num1 << " and " << num2;
    }
    return 0;
}