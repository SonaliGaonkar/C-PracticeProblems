#include <iostream>
int main()
{
    int num, product;
    std::cout << "Enter number to generate table : ";
    std::cin >> num;
    for (int i = 1; i <= 10; i++)
    {
        product = num * i;
        std::cout << num << " * " << i << " = " << product << "\n";
    }
    return 0;
}