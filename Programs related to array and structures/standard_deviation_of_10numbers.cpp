#include <iostream>
#include <cmath>
int i;
double sum = 0, difference, diff,total_diff, variance, deviation;
double standard_deviation(int arr[10])
{
    for (i = 0; i < 10; ++i)
    {
        sum += arr[i];
    }
    double mean = sum / 10;
    std::cout << "\nmean : " << mean;
    for (i = 0; i < 10; ++i)
    {
        difference = mean - arr[i];
        diff = difference * difference;
        total_diff +=diff;
    }
    
    variance = total_diff / 10;
    std::cout << "\nvariance : " << variance;
    deviation = sqrt(variance);
    std::cout << "\nstandard_deviation : " << deviation;
}
int main()
{
    int arr[10];
    std::cout << "Enter numbers : ";
    for (int i = 0; i < 10; ++i)
    {

        std::cin >> arr[i];
    }
    standard_deviation(arr);

    return 0;
}