#include <stdio.h>

/**
 * main - possible different combinations of three digits.
 *
 * Return: Always 0
 */

int main(void)
{
	int on;
	int te;
	int hu;

	for (hu = '0'; hu <= '9'; hu++)
	{
		for (te = (hu + 1); te <= '9'; te++)
		{
			for (on = (te + 1); on <= '9'; on++)
			{
				putchar(hu);
				putchar(te);
				putchar(on);
				if (hu != '7' || te != '8' || on != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
