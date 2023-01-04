#include "main.h"

/**
 * _memcpy - copy source to dest
 * @dest: copy dest to
 * @src: source to copy from
 * @n: amount of times
 * Return: return the string value
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
