#include <iostream>
#include <cmath>
int i;
double sum, difference, diff, variance, deviation;
double standard_deviation(int arr[10])
{
    for (i = 0; i < 10; ++i)
    {
        sum += arr[i];
    }
    double mean = sum / 10;
    for (i = 0; i < 10; ++i)
    {
        difference = mean - arr[i];
        diff = difference * difference;
    }
    for (i = 0; i < 10; ++i)
    {
        diff += arr[i];
    }
    variance = diff / 10;
    deviation = sqrt(variance);
    std::cout << "standard_deviation : " << deviation;
}
int main()
{
    int arr[10];
    std::cout << "Enter numbers : ";
    for (int i = 0; i < 10; ++i)
    {

        std::cin >> arr[i];
    }
    for (int i = 0; i < 10; ++i)
    {
        std::cout << "Entered number : arr[" << i << "] = " << arr[i] << "\n";
    }
    standard_deviation(arr);

    return 0;
}