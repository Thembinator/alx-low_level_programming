#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 always success
 */

int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0)
{
	while (count < argc)
{
	printf("%s\n", argv[count]);
	count++;
}
}
	return (0);
}
