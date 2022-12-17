#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int b, c;

	b = c = 0;
	while (b < 10)
	{
		while (c <= 14)
		{
			if (c >= 10)
				_putchar(c / 10 + '0');
			_putchar(c % 10 + '0');
			++c;
		}
		_putchar('\n');
		c = 0;
		b++;
	}
}
