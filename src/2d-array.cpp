#include <iostream>

int main()
{

    int matrix[2][2] = {{1, 2}, {3, 4}};

    for (int i = 0; i < sizeof(matrix) / sizeof(matrix[0]); i++)
    {
        for (int j = 0; j < sizeof(matrix[i]) / sizeof(matrix[i][0]); j++)
        {
            std::cout << i << " | " << j << " = " << matrix[i][j] << "\n";
        }
    }
}