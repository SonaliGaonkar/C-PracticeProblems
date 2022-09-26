#include <iostream>

int main()
{
    int a = 5;
    //pattern 1 to 5
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    //pattern 5 to 1
    for (int i = 0; i < a; i++)
    {
        for (int j = i; j < a; j++)
        {
            std::cout << "0";
        }
        std::cout << "\n";
    }
    return 0;
}