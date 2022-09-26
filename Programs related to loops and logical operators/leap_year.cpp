#include <iostream>

int main()
{
    int year;
    std::cout << "enter year :";
    std::cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        std::cout << "The year " << year << " is leap year.";
    }
    else
    {
        std::cout << "The year " << year << " is not leap year.";
    }
    return 0;
}