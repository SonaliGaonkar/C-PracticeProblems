#include <iostream>

void numbers(int x)
{
    switch (x)
    {
    case 1:
        std::cout << "one";
        break;
    case 2:
        std::cout << "two";
        break;
    case 3:
        std::cout << "three";
        break;
    case 4:
        std::cout << "four";
        break;
    case 5:
        std::cout << "five";
        break;
    case 6:
        std::cout << "six";
        break;
    default:
        std::cout << "not in range";
        break;
    }
}
int main()
{
    numbers(5);
    return 0;
}