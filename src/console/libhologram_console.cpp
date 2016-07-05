// libhologram_console.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <cuda.h>

#include "hwCheck.h"
#include "cudaAdd.cuh"


int _tmain(int argc, _TCHAR* argv[])
{
	/*! \brief hardware mode (no hardware, single device, multi-threaded, etc.) */
	int hardwareMode;

	/*! \brief number of CUDA devices */
	int gpuDeviceCount;

	/*! \brief array of CUDA device numbers */
	int *gpuDeviceIDs;

	/*! \brief array of CUDA device names */
	char *gpuDeviceNames;

	checkHardware(hardwareMode, gpuDeviceCount, &gpuDeviceIDs, &gpuDeviceNames, false);



	// Initialize GPU device
	cuInit(0);

	float a = 1, b = 2, c = 0;
	int n = 1;

	// Run simple test
	vectorAddition(&a, &b, &c, n);
	std::cout << "Result: " << c << std::endl << std::endl;

	system("Pause");
	return 0;
}

