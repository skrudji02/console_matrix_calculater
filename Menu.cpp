#include "Menu.h"

Menu::Menu()
{
    matrix = nullptr;
    rows_matrixA = 0;
   	columns_matrixA = 0;
    rows_matrixB = 0;
   	columns_matrixB = 0;
}

Menu::~Menu()
{
    delete matrix;
}

void Menu::menu()
{
    char user_choice;
    std::cout << "Введите 'm' чтобы перемножить матрицы."<<std::endl;
    std::cout << "Введите 's' чтобы возвести матрицу в степень."<<std::endl;
    std::cin >> user_choice;
    system("cls");

    switch (user_choice)
    {
    case 'm': Matrix_Multiplication();
        break;
    case 's': Matrix_RaiseDegree();
        break;
    }
}

int Menu::Matrix_Multiplication()
{
    std::cout << "Введите кол-во строк матрицы А : ";
    std::cin >> rows_matrixA;
    std::cout << "Введите кол-во столбцов матрицы А : ";
    std::cin >> columns_matrixA;
    std::cout << "\n";
    std::cout << "Введите кол-во строк матрицы В : ";
    std::cin >> rows_matrixB;
    std::cout << "Введите кол-во столбцов матрицы В : ";
    std::cin >> columns_matrixB;

    if (columns_matrixA != rows_matrixB)
    {
        std::cout << "Такие матрицы нельзя перемножить, так как количество столбцов матрицы А не равно количеству строк матрицы В." << std::endl;
        system("PAUSE");
        return 1;
    }

    matrix = new Matrixs{ rows_matrixA, columns_matrixA, rows_matrixB, columns_matrixB };

    matrix->Init_MatrixA();
    matrix->Init_MatrixB();

    matrix->Write_MatrixA();
    std::cout << "\n";
    matrix->Write_MatrixB();
    std::cout << "\n";
    matrix->Multiplication();
    matrix->Write_Matrix_Result();
}

void Menu::Matrix_RaiseDegree()
{
    int degree;
    std::cout << "Введите кол-во строк матрицы А : ";
    std::cin >> rows_matrixA;
    std::cout << "Введите кол-во столбцов матрицы А : ";
    std::cin >> columns_matrixA;
    std::cout << "Введите степень : ";
    std::cin >> degree;
    matrix = new Matrixs{ rows_matrixA, columns_matrixA, rows_matrixB, columns_matrixB };
    matrix->Init_MatrixA();
    matrix->Write_MatrixA();
    std::cout << std::endl;
    matrix->Square(degree);
    matrix->Write_MatrixA();
}