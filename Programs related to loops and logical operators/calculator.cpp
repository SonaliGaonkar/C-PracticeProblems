#include <iostream>

int main()
{
    double num1, num2, ans;
    char op;
    std::cout << "Enter two numbers : ";
    std::cin >> num1 >> num2;
    std::cout << "Enter operator : ";
    std::cin >> op;

    switch (op)
    {
    case '+':
        ans = num1 + num2;
        std::cout << num1 << " + " << num2 << " = " << ans;
        break;
    case '-':
        ans = num1 - num2;
        std::cout << num1 << " - " << num2 << " = " << ans;
        break;
    case '*':
        ans = num1 * num2;
        std::cout << num1 << " * " << num2 << " = " << ans;
        break;
    case '/':
        ans = num1 / num2;
        std::cout << num1 << " / " << num2 << " = " << ans;
        break;
    default:
        std::cout << "no such operator";
    }
    return 0;
}