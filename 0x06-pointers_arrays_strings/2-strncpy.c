#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: pointer to copy to
 * @src: pointer to copy from
 * @n: Num of char to be copied
 * Return: Pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i]	= src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
