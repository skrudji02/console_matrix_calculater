#pragma once

#include <iostream>

class Matrixs
{
private:
	// Matrix �
	int rows_matrixA;
	int columns_matrixA;
	int** matrixA;

	// Matrix �
	int rows_matrixB;
	int columns_matrixB;
	int** matrixB;

	// Matrix �
	int rows_result;
	int columns_result;
	int** matrix_result;

public:
	 Matrixs(int _rows_matrixA, int _column_matrixA, int _rows_matrixB, int _column_matrixB);
	 // deleting allocated memory
	~Matrixs();

	// initialization matrix �
	void Init_MatrixA();
	// initialization matrix �
	void Init_MatrixB();
	// multiplication matrix � � B
	void Multiplication();
	// output matrix �
	void Write_MatrixA();
	// output matrix �
	void Write_MatrixB();
	// output matrix C
	void Write_Matrix_Result();
};

