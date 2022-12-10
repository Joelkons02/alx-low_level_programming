#include <stdio.h>

/**
 * main - print alpha in lower and upper case
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z') /*print lowercases a - z*/
	{
		putchar(lower);
		++lower;
	}

	while (upper <= 'Z') /*print uppercases A - Z*/
	{
		putchar(upper);
		++upper;
	}

	putchar('\n');

	return (0);
}
