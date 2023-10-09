#include "main.h"
#include <stdlib.h>

/**
 * array_range - array of integer
 * @min: starting int 
 * @max: max int
 * Return: array of integers 
 */
int *array_range(int min, int max)
{
	int i, len;
	int *a;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	a = malloc(sizeof(int) * len);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < len; i++, min++)
	{
		a[i] = min;
	}
	return (a);
}
