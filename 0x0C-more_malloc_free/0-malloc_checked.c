#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: memory to allocate
 * Return: pointer to the allocated memory,
 * if malloc fails should cause normal process termination and status 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	exit(98);
	return (ptr);
}
