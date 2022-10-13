#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for integer
 * @array: array to search in
 * @size: is the number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 * Return:  index of the first element for which
 * the cmp function does not return 0, or 1- if no match is found
 * if size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
{
	for (i = 0; i < size; i++)
{
	if (cmp(array[i]) != 0)
	return (i);
}
}
	return (-1);
}
