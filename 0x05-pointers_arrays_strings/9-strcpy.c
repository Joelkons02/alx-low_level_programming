#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: pointer to string
 * @src: string to dest
 * Return: the value of the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
