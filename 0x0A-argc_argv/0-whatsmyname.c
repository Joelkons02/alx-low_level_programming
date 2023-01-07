#include <stdio.h>
#include "main.h"

/**
 * main - prints the program name
 *
 * @argc: number of arguments
 * @argv: arguments to program
 *
 * Return: 0 if successful
 */

int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - argc]);
	return (0);
}
