#include <iostream>
int main()
{
    int i, j, k, col, row, a[100][100], b[100][100], mult[100][100];
    std::cout << "Enter number of rows  : \n";
    std::cin >> row;
    std::cout << "Enter number of columns  : \n";
    std::cin >> col;
    {
        std::cout << "Enter values of matrix A  : \n";
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                std::cin >> a[i][j];
            }
        }

        std::cout << "Enter values of matrix B : \n";
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                std::cin >> b[i][j];
            }
        }

        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                mult[i][j] = 0;
            }
        }
        std::cout << "sum of matrix A and B : \n";
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                for (k = 0; k < col; k++)
                    mult[i][j] += a[i][k] * b[k][j];
            }
        }
        std::cout << "\nOutput Matrix : \n";
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                std::cout << " " << mult[i][j];
                if (j == col - 1)
                    std::cout << "\n";
            }
        }
    }
    return 0;
}