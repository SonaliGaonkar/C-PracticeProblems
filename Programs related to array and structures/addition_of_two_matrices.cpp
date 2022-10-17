#include <iostream>
int main()
{
    int i, j, row_col, a[100][100], b[100][100], sum[100][100];
    std::cout << "Enter number of rows and columns : \n";
    std::cin >> row_col;
    {
        std::cout << "Enter values of matrix A  : \n";
        for (i = 0; i < row_col; i++)
        {
            for (j = 0; j < row_col; j++)
            {
                std::cin >> a[i][j];
            }
        }

        std::cout << "Enter values of matrix B : \n";
        for (i = 0; i < row_col; i++)
        {
            for (j = 0; j < row_col; j++)
            {
                std::cin >> b[i][j];
            }
        }

        for (i = 0; i < row_col; i++)
        {
            for (j = 0; j < row_col; j++)
            {
                sum[i][j] = a[i][j] + b[i][j];
            }
        }
        std::cout << "sum of matrix A and B : \n";
        for (i = 0; i < row_col; i++)
        {
            for (j = 0; j < row_col; j++)
            {
                std::cout << sum[i][j] << "   ";
            }
            std::cout << "\n";
        }
    }
    return 0;
}