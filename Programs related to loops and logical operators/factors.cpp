#include <iostream>

int main()
{
    int num;
    std::cout << "Enter number :";
    std::cin >> num;
    std::cout<<"Factors are : ";
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            std::cout << i << "  ";
        }
    }
    return 0;
}