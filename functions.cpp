#include <iostream>

int add(int num1, int num2)
{
    return (num1 + num2);
}
int main()
{
    int sum = add(4, 4);
    std::cout << "The sum of two numbers is : " << sum;
    return 0;
}
