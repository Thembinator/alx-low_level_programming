#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 */

int main(int argc, char *argv[])
{
	while (argc--)
	printf("%s\n", *argv++);
	exit (EXIT_SUCCESS);
}