#include "main.h"

/**
 * times_table - function that prints the 9 times table
 * Return: void
 */

void times_table(void)
{
	int r, c, p;

	for (r = 0; r <= 9; r++)
	{
		for (c = 0; c <= 9; c++)
		{
			p = (r * c);
			{
				_putchar(',');
				_putchar(' ');
			}
			if (p >= 10)
			{
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
			else if (p < 10 && c != 0)
			{
				_putchar(' ');
				_putchar((p % 10) + '0');
			}
			else
				_putchar((p % 10) + '0');
		}
		_putchar('\n');
	}
}
