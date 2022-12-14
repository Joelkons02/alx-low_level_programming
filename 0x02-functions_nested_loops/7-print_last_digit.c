#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @n: to find the last digit.
 * Return: The last digit.
 */

int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;

	_putchar('0' + (n % 10));

	return (n % 10);
}
