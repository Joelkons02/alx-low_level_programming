#include "main.h"

/**
 * _strlen - cal the length of a string.
 * @s: string to be measured
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
