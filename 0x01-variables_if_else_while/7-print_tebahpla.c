#include <stdio.h>

/**
 * main - print aplha in reverse
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int le;

	for (le = 'z'; le >= 'a'; le--)
		putchar(le);

	putchar('\n');

	return (0);
}
