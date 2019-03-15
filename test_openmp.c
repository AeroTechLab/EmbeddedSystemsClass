#include <stdio.h>
#include "omp.h"
int main()
{
#pragma omp parallel
	{
		printf("oi\n");
	}
}
