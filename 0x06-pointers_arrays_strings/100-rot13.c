#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 * @e: input
 * Return: encoded string
 */

char *rot13(char *e)
{
	int i;
	int j;

	char c[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char o[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char boolean;

	for (i = 0; e[i] != '\0'; i++)
	{
		boolean = 0;
		for (j = 0; o[j] != '\0' && boolean == 0; j++)
		{
			if (e[i] == o[j])
			{
				e[i] = c[j];
				boolean = 1;
			}
		}
	}
	return (e);
}
