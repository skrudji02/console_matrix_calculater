#pragma once

#include <iostream>
#include "Matrixs.h"

class Menu
{
	int rows_matrixA;
	int	columns_matrixA;
	int rows_matrixB;
	int	columns_matrixB;

	Matrixs* matrix;
private:
	int Matrix_Multiplication();
	void Matrix_RaiseDegree();
public:
	Menu();
	~Menu();
	void menu();
};

