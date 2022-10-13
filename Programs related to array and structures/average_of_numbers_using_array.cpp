#include <iostream>
int i;
double sum;
double average(int arr[5])
{
    for (i = 0; i < 5; ++i)
    {
        sum += arr[i];
    }
    double avg = sum / 5;
    std::cout << "average of numbers is : " << avg;
}
int main()
{
    int arr[5];
    std::cout << "Enter numbers : ";
    for (int i = 0; i < 5; ++i)
    {

        std::cin >> arr[i];
    }
    for (int i = 0; i < 5; ++i)
    {
        std::cout << "Entered number : arr[" << i << "] = " << arr[i] << "\n";
    }
    average(arr);

    return 0;
}