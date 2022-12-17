#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0-9
 *
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		if (a != 2 && a != 4)
			_putchar(a + '0');
		++a;
	}
	_putchar('\n');
}
