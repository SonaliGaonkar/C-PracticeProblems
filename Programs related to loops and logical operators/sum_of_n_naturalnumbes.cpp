#include <iostream>

int main()
{
    int num;
    int sum = 0;
    std::cout << "Enter range n :";
    std::cin >> num;
    for (int i = 1; i <= num; ++i)
    {
        sum += i;
    }
    std::cout << "The sum of natural numbers is " << sum;
    return 0;
}