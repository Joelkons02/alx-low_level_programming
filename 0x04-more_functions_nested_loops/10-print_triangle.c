#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: refers to height
 */

void print_triangle(int size)
{
	int d, w;

	if (size > 0)
	{
		for (d = 1; d <= size; d++)
		{
			for (w = size; w >= 1; w--)
			{
				if (d < w)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
