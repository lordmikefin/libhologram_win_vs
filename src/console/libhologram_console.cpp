// libhologram_console.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <cuda.h>
#include "cudaAdd.cuh"

int _tmain(int argc, _TCHAR* argv[])
{
	cuInit(0);

	float a = 1, b = 2, c = 0;
	int n = 1;

	vectorAddition(&a, &b, &c, n);
	std::cout << "Result: " << c << std::endl;

	system("Pause");
	return 0;
}

