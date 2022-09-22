#include "main.h"

/**
 * reverse_array -  reverses the content of an array of integers
 * @a: array
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	int tmp, inc;

	for (inc = n - 1; inc > n / 2; inc--)
{
	tmp = a[n - 1 - inc];
	a[n - 1 - inc] = a[inc];
	a[inc] = tmp;
}
}
