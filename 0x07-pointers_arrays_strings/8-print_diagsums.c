#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints diagonal sums in 2d array
 * @a: int array to use
 * @size: square size of diagonal
 */

void print_diagsums(int *a, int size)
{
	int i;
	int diagR = 0;
	int diagV = 0;

	for (i = 0; i < size; i++)
	{
		diagR += a[(i * size) + i];
		diagV += a[(size - 1) + ((size - 1) * i)];
	}
	printf("%d, %d\n", diagR, diagV);
}
