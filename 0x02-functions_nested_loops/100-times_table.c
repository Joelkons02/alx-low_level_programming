#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: table of multiplication
 * Return: void
 */

void print_times_table(int n)
{
	int a, b, p;

	if (!(n > 15 || n < 0))
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				p = (a * b);
				if (b != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (p < 10 && b != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((p % 10) + '0');
				}
				else if (p >= 10 && p < 100)
				{
					_putchar(' ');
					_putchar((p / 10) + '0');
					_putchar((p % 10) + '0');
				}
				else if (p >= 100 && p != 0)
				{
					_putchar((p / 100) + '0');
					_putchar((p / 10) % 10 + '0');
					_putchar((p % 10) + '0');
				}
				else
					_putchar((p % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
