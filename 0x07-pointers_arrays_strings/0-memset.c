#include "main.h"

/**
 * _memset - sets the memory to array
 * @s: array to use
 * @b: value to use
 * @n: amount of times
 * Return: char value of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
