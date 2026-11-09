#include <stdlib.h>
#include <stdio.h>
#include "functions.h"

int main()
{
	compute_average(12, 16, 24);
	double average = compute_average(12, 16, 24);
	printf("La moyenne de 12, 16 et 24  est %.2f\n", average);

	exit(0);
}
