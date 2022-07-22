#include "Matrixs.h"

int main()
{
    setlocale(LC_ALL, "Rus");

    int columns_matrixA, rows_matrixA,
        columns_matrixB, rows_matrixB;

    std::cout << "Введите кол-во строк матрицы А : ";
    std::cin >> columns_matrixA;
    std::cout << "Введите кол-во столбцов матрицы А : ";
    std::cin >> rows_matrixA;
    std::cout << "\n";
    std::cout << "Введите кол-во строк матрицы В : ";
    std::cin >> columns_matrixB;
    std::cout << "Введите кол-во столбцов матрицы В : ";
    std::cin >> rows_matrixB;

    if (rows_matrixA != columns_matrixB)
    {
        std::cout << "Такие матрицы нельзя перемножить, так как количество столбцов матрицы А не равно количеству строк матрицы В." << std::endl;
        return 1;
    }

    Matrixs matrix{ columns_matrixA, rows_matrixA, columns_matrixB, rows_matrixB };


    matrix.Init_MatrixA();
    matrix.Init_MatrixB();

    matrix.Write_MatrixA();
    std::cout << "\n";
    matrix.Write_MatrixB();
    std::cout << "\n";
    matrix.Multiplication();
    matrix.Write_Matrix_Result();

    system("PAUSE");

    return 0;
}


