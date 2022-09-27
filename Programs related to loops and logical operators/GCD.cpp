#include <iostream>

int main()
{
    int num1, num2, gcd, a;
    std::cout << "Enter two numbers : ";
    std::cin >> num1 >> num2;
    if (num1 > num2)
    {
        a = num1;
    }
    else
    {
        a = num2;
    }
    for (int i = 1; i <= a; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }
    std::cout << gcd;

    return 0;
}