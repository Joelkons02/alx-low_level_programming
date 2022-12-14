#include <stdio.h>

/**
 * main - list all the natural numbers below 10 & are multiples of 3 or 5
 * Return: void
 */

int main(void)
{
	int b, c;

	for (b = 0; b < 1024; b++)
		if (b % 3 == 0 || b % 5 == 0)
			c += b;
	printf("%d\n", c);
	return (0);
}
