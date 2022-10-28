#include <iostream>
int main()
{
    int sum = 0;

    for (int i = 1; i <= 1000; i++)
    {
        sum += i;
    }
    std::cout << sum;
    return 0;
}

//less memory and less time for above problem by modofication in algorithm
#include <iostream>
int main()
{
    int sum = 0;

    sum = (1000 * (1000 + 1)) / 2;
    std::cout << sum;
    return 0;
}