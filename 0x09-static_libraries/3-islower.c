#include "main.h"

/**
 * _islower - function to check for lowercase characters.
 *
 * @c: The int that will be used as argument of the function.
 * Return: 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
{
	return (1);
}
	else
	return (0);
}
