#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char le;

	for (le = 'a'; le <= 'z'; le++)
	{
		_putchar(le);
	}
	_putchar('\n');
}
