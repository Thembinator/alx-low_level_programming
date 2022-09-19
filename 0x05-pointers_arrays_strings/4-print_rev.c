#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: string to print in reverse
 * Return: nothing
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
	_putchar(*(s + len));
	_putchar(10);
}
