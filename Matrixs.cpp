#include "Matrixs.h"

Matrixs::Matrixs(int _rows_matrixA, int _column_matrixA, int _rows_matrixB, int _column_matrixB)
{
	// completion rows and columns matrix А,B and С
	rows_matrixA = _rows_matrixA;
	columns_matrixA = _column_matrixA;
	rows_matrixB = _rows_matrixB;
	columns_matrixB = _column_matrixB;
	rows_result = rows_matrixA;
    columns_result = columns_matrixB; 
	
	// allocation memory matrix A
	matrixA = new int* [rows_matrixA];
	for (int i = 0; i < rows_matrixA; i++)
	{
		matrixA[i] = new int[columns_matrixA];
	}

	// allocation memory matrix B
	matrixB = new int* [rows_matrixB];
	for (int i = 0; i < rows_matrixB; i++)
	{
		matrixB[i] = new int[columns_matrixB];
	}

	// allocation memory matrix C
	matrix_result = new int* [rows_result];
	for (int i = 0; i < rows_result; i++)
	{
		matrix_result[i] = new int[columns_result];
	}
}

// deleting allocated memory
Matrixs::~Matrixs()
{
	// deleting matrix A
	for (int i = 0; i < rows_matrixA; i++)
	{
		delete[]matrixA[i];
	}
	delete[]matrixA;

	// deleting matrix B
	for (int i = 0; i < rows_matrixB; i++)
	{
		delete[]matrixB[i];
	}
	delete[]matrixB;

	// deleting matrix C
	for (int i = 0; i < rows_result; i++)
	{
		delete[]matrix_result[i];
	}
	delete[]matrix_result;		
}

//  initialization matrix А
void Matrixs::Init_MatrixA()
{
	for (int i = 0; i < rows_matrixA; i++)
	{
		for (int j = 0; j < columns_matrixA; j++)
		{
			std::cout << "Введите " << "[" << i + 1 << "]" << "[" << j + 1 << "] эллемент матрицы А : ";
			std::cin >> matrixA[i][j];
			std::cout << "\n";
		}
	}
}

//  initialization matrix В
void Matrixs::Init_MatrixB()
{
	for (int i = 0; i < rows_matrixB; i++)
	{
		for (int j = 0; j < columns_matrixB; j++)
		{
			std::cout << "Введите " << "[" << i + 1 << "]" << "[" << j + 1 << "] эллемент матрицы B : ";
			std::cin >> matrixB[i][j];
			std::cout << "\n";
		}
	}
}

// multiplication matrixА и B
void Matrixs::Multiplication()
{
	int result = 0;
	int rows = 0;
	while (rows != rows_result)
	{
		for (int i = 0; i < columns_result; i++)
		{
			for (int j = 0; j < columns_matrixA; j++)
			{
				result += matrixA[rows][j] * matrixB[j][i];
			}
			matrix_result[rows][i] = result;
			result = 0;
		}
		++rows;
	}
}

// raises to a degree
void Matrixs::Square(int degree)
{
	for (int i = 0; i < rows_matrixA; i++)
	{
		for (int j = 0; j < columns_matrixA; j++)
		{
			matrixA[i][j] = pow(matrixA[i][j],degree);
		}
	}
}

// output matrix А
void Matrixs::Write_MatrixA()
{
	for (int i = 0; i < rows_matrixA; i++)
	{
		for (int j = 0; j < columns_matrixA; j++)
		{
			std::cout << " " << matrixA[i][j];
		}
		std::cout << "\n";
	}
}

// output matrix В
void Matrixs::Write_MatrixB()
{
	for (int i = 0; i < rows_matrixB; i++)
	{
		for (int j = 0; j < columns_matrixB; j++)
		{
			std::cout << " " << matrixB[i][j];
		}
		std::cout << "\n";
	}
}

// output matrix С
void Matrixs::Write_Matrix_Result()
{
	for (int i = 0; i < rows_result; i++)
	{
		for (int j = 0; j < columns_result; j++)
		{
			std::cout << " " << matrix_result[i][j];
		}
		std::cout << "\n";
	}
}




