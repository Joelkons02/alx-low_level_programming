#include "main.h"

/**
 * swap_int - switches value of 1st and 2nd input.
 *  @a: 1st value
 *  @b: 2nd value
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
