#include "omp.h"
#include "stdio.h"
#include <ctime>
#include "windows.h"
#include <iostream>
#include "tchar.h"
using namespace std;



int main()
{
	omp_set_num_threads(3);
	#pragma omp parallel 
	{
		PRIVET KY KY KY 
			POKA POKA
		printf("I am %d thread from %d threads!\n",
			omp_get_thread_num(),
			omp_get_num_threads()
		);
	}

	getchar();
}
