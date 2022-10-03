#include <stdio.h>
#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * check_num - check string if there are digit
 * @str: array string
 * Return: always 0 success
 */

int check_num(char *str)
{

	unsigned int count;

	count = 0;
	while (count < strlen(str))
{
	if (!isdigit(str[count]))
{
	return (0);
}
	count++;
}
	return (1);
}

/**
 * main - print name of program
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 success
 */


int main(int argc, char *argv[])
{
	int atoi(char *);

	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)
{
	if (check_num(argv[count]))
{
	str_to_int = atoi(argv[count]);
	sum += str_to_int;
}
	else
{
	printf("Error\n");
	return (1);
}
	count++;
}
	printf("%d\n", sum);
	return (0);
}
