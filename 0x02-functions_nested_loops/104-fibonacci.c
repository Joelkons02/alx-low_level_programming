#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count;
	unsigned long a, b, c;
	unsigned long e, f, g, prod;

	count = 0;
	a = 0;
	b = 1;
	for (count = 1; count <= 91; count++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu, ", c);
	}
	e = a % 1000;
	a = a / 1000;
	f = b % 1000;
	b = b / 1000;
	while (count <= 98)
	{
		prod = (e + f) / 1000;
		g = (e + f) - prod * 1000;
		c = (a + b) + prod;
		e = f;
		f = g;
		a = b;
		b = c;
		if (g >= 100)
			printf("%lu%lu", c, g);
		else
			printf("%lu0%lu", c, g);
		if (count != 98)
			printf(", ");
		count++;
	}
	putchar('\n');
	return (0);
}
