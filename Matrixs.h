#pragma once

#include <iostream>


class Matrixs
{
private:
	// Матрица А
	int column_matrixA;
	int rows_matrixA;
	int** matrixA;

	// Матрица В
	int column_matrixB;
	int rows_matrixB;
	int** matrixB;

	// Матрица С
	int column_result;
	int rows_result;
	int** matrix_result;

public:
	 Matrixs(int _column_matrixA, int _rows_matrixA, int _column_matrixB, int _rows_matrixB);
	~Matrixs();
	void Init_MatrixA();
	void Init_MatrixB();
	void Multiplication();
	void Write_MatrixA();
	void Write_MatrixB();
	void Write_Matrix_Result();
};

