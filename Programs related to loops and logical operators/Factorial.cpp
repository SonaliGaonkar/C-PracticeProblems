#include <iostream>

int main()
{
    int num;
    int factorial = 1;
    std::cout << "Enter number to find factorial : ";
    std::cin >> num;
    for (int i = 1; i <= num; i++)
    {
        factorial = factorial * i;
    }
    std::cout << "the factorial is" << factorial;

    return 0;
}