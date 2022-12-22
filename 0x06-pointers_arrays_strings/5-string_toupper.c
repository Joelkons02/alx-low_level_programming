#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @e: pointer to string
 * Return: char converted
 */

char *string_toupper(char *e)
{
	int f;

	f = 0;
	while (e[f] != '\0')
	{
		if (e[f] >= 'a' && e[f] <= 'z')
			e[f] = e[f] - 32;
		f++;
	}
	return (e);
}
