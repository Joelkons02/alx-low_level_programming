#include "main.h"

/**
 * _isupper - checks for upper
 * @c: character to be checked.
 * Return: 1 if c is upper, else return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
