#pragma once

#include <iostream>

class Matrixs
{
private:
	// Matrix À
	int rows_matrixA;
	int columns_matrixA;
	int** matrixA;

	// Matrix Â
	int rows_matrixB;
	int columns_matrixB;
	int** matrixB;

	// Matrix Ñ
	int rows_result;
	int columns_result;
	int** matrix_result;

public:
	 Matrixs(int _rows_matrixA, int _column_matrixA, int _rows_matrixB, int _column_matrixB);
	 // deleting allocated memory
	~Matrixs();

	// initialization matrix À
	void Init_MatrixA();
	// initialization matrix Â
	void Init_MatrixB();
	// multiplication matrix À è B
	void Multiplication();
	// output matrix À
	void Write_MatrixA();
	// output matrix Â
	void Write_MatrixB();
	// output matrix C
	void Write_Matrix_Result();
};

