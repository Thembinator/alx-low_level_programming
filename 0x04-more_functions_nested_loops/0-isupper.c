#include "main.h"

/**
 * _isupper - checks if character is uppercase or not
 * @c: character to be tested
 * Return: 1 when it is, 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'z'))
{
	return (1);
}
	return (0);
}
