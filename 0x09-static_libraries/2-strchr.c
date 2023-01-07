#include "main.h"

/**
 * _strchr - locates char in strn
 * @s: string to locate char
 * @c: char to find
 * Return: char value
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (s[i] == c)
		return (s + i);
	return (0);
}
