#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 * @str: string to print
 * on success: returns no error
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
{
	_putchar(*(str + i));
	i++;
}
	_putchar(10);
}
