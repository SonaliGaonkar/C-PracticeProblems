#include <iostream>
int main()
{
    int i, j, col, row, a[100][100], transpose[100][100];
    std::cout << "Enter number of rows  : \n";
    std::cin >> row;
    std::cout << "Enter number of columns  : \n";
    std::cin >> col;
    {
        std::cout << "Enter values of matrix  : \n";
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                std::cin >> a[i][j];
            }
        }
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                transpose[j][i] = a[i][j];
            }
        }

        std::cout << "original matrix A  : \n";
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                std::cout << a[i][j] << "   ";
            }
            std::cout << "\n";
        }

        std::cout << "transpose of matrix A : \n";
        for (i = 0; i < col; i++)
        {
            for (j = 0; j < row; j++)
            {
                std::cout << transpose[i][j] << "   ";
            }
            std::cout << "\n";
        }
    }
    return 0;
}