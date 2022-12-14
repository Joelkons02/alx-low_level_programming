#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char le;

	while (count++ <= 9)
	{
		for (le = 'a'; le <= 'z'; le++)
			_putchar(le);
		_putchar('\n');
	}
}
