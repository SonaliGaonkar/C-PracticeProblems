#include <iostream>

void array1D_display(int s[5])
{
    for (int i = 0; i < 5; i++)
    {
        std::cout << s[i] << "\n";
    }
}
void array2D_display(int s[2][5])
{
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 5; j++)
        {
            std::cout << s[i][j] << " ";
        }
    }
}
int main()
{

    // 1-D array
    int arr[5] = {2, 1, 3};
    // 2-D array
    int array[2][5] = {{5,  6, -9},
                       {5, -2, -2, 1, 3}};
    array1D_display(arr);
    array2D_display(array);
    return 0;
}