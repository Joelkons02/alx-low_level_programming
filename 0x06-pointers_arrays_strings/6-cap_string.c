#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: string to be capitalied
 * Return: to string
 */

char *cap_string(char *s)
{
	int a;

	a = 0;
	while (s[a])
	{
		while (!(s[a] >= 'a' && s[a] <= 'z'))
			a++;
		if (s[a - 1] == ' ' ||
				s[a - 1] == '\n' ||
				s[a - 1] == ',' ||
				s[a - 1] == '\t' ||
				s[a - 1] == ';' ||
				s[a - 1] == '.' ||
				s[a - 1] == '!' ||
				s[a - 1] == '?' ||
				s[a - 1] == '"' ||
				s[a - 1] == '{' ||
				s[a - 1] == '}' ||
				s[a - 1] == '(' ||
				s[a - 1] == ')' ||
				a == 0)
			s[a] -= 32;
		a++;
	}
	return (s);
}
