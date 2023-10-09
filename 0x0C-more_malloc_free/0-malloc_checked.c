#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Main Entry
 * @b: int
 * Return: pointer to teh array 0
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == 0)
		exit(98);
	return (p);
}
