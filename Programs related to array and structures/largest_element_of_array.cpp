#include <iostream>
int i, n = 0;
double arr[5];
double largest(double arr[5])
{
    for (i = 0; i < 5; ++i)
    {
        if (n < arr[i])

        {
            n = arr[i];
        }
    }
    std::cout << "\n Largest value in array = " << n;
}
int main()
{
    std::cout << "Enter values of array : ";
    for (int i = 0; i < 5; ++i)
    {
        std::cin >> arr[i];
    }
    for (int i = 0; i < 5; ++i)
    {
        std::cout << "\narr[" << i << "] = " << arr[i];
    }

    largest(arr);
    return 0;
}