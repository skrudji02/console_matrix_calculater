#include "Matrixs.h"

Matrixs::Matrixs(int _column_matrixA, int _rows_matrixA, int _column_matrixB, int _rows_matrixB)
{
	// ������������� ����� � �������� ������� � � � ,� ����� �������� ������� �
	column_matrixA = _column_matrixA;
	rows_matrixA = _rows_matrixA;
	column_matrixB = _column_matrixB;
	rows_matrixB = _rows_matrixB;

	if(rows_matrixA<=rows_matrixB)
	    rows_result = _rows_matrixB;
	else
		rows_result = _rows_matrixA;

	if (column_matrixA <= column_matrixB)
	{
		column_result = column_matrixA;
		matrix_result = new int* [column_result];
	}
	else
	{
		column_result = column_matrixB;
		matrix_result = new int* [column_result];
	}
	for (int i = 0; i < column_result; i++)
	{
		matrix_result[i] = new int[rows_result];
	}

	matrixA = new int* [column_matrixA];
	for (int i = 0; i < column_matrixA; i++)
	{
		matrixA[i] = new int[rows_matrixA];
	}

	matrixB = new int* [column_matrixB];
	for (int i = 0; i < column_matrixB; i++)
	{
		matrixB[i] = new int[rows_matrixB];
	}
}

// �������� ���������� ������ 
Matrixs::~Matrixs()
{
	for (int i = 0; i < column_matrixA; i++)
	{
		delete[]matrixA[i];
	}
	delete[]matrixA;

	for (int i = 0; i < column_matrixB; i++)
	{
		delete[]matrixB[i];
	}
	delete[]matrixB;

	for (int i = 0; i < column_result; i++)
	{
		delete[]matrix_result[i];
	}
	delete[]matrix_result;		
}

// ���������� ������� �
void Matrixs::Init_MatrixA()
{
	for (int i = 0; i < column_matrixA; i++)
	{
		for (int j = 0; j < rows_matrixA; j++)
		{
			std::cout << "������� " << "[" << i + 1 << "]" << "[" << j + 1 << "] �������� ������� � : ";
			std::cin >> matrixA[i][j];
			std::cout << "\n";
		}
	}
}

// ���������� ������� �
void Matrixs::Init_MatrixB()
{
	for (int i = 0; i < column_matrixB; i++)
	{
		for (int j = 0; j < rows_matrixB; j++)
		{
			std::cout << "������� " << "[" << i + 1 << "]" << "[" << j + 1 << "] �������� ������� B : ";
			std::cin >> matrixB[i][j];
			std::cout << "\n";
		}
	}
}

// ��������� ������ � � B
void Matrixs::Multiplication()
{
	int result = 0;
	int column = 0;
	while (column != column_result)
	{
		for (int i = 0; i < rows_result; i++)
		{
			for (int j = 0; j < rows_result; j++)
			{
				result += matrixA[column][j] * matrixB[j][i];
			}
			matrix_result[column][i] = result;
			result = 0;
		}
		++column;
	}
}

// ����� ������� �
void Matrixs::Write_MatrixA()
{
	for (int i = 0; i < column_matrixA; i++)
	{
		for (int j = 0; j < rows_matrixA; j++)
		{
			std::cout << " " << matrixA[i][j];
		}
		std::cout << "\n";
	}
}

// ����� ������� �
void Matrixs::Write_MatrixB()
{
	for (int i = 0; i < column_matrixB; i++)
	{
		for (int j = 0; j < rows_matrixB; j++)
		{
			std::cout << " " << matrixB[i][j];
		}
		std::cout << "\n";
	}
}

// ����� ������� �
void Matrixs::Write_Matrix_Result()
{
	for (int i = 0; i < column_matrixA; i++)
	{
		for (int j = 0; j < rows_result; j++)
		{
			std::cout << " " << matrix_result[i][j];
		}
		std::cout << "\n";
	}
}




