#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: input string.
 * Return: value of s
 */

char *leet(char *s)
{
	int i, j;
	char car[] = "aAeEoOtTlL";
	char wo[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == car[j])
			{
				s[i] = wo[j];
			}
		}
	}
	return (s);
}
