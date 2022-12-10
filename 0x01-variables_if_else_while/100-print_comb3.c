#include <stdio.h>

/**
 * main - possible combinations
 *
 * return: Always 0
 */

int main(void)
{
	int on;
	int te;

	for (te = '0'; te <= '9'; te++)
	{
		for (on = (te + 1); on <= '9'; on++)
		{
			putchar(te);
			putchar(on);

			if (te != '8' || on != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
