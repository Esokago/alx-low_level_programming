#include "main.h"
/**
 * _memset - fill a block of memory with specific value
 * @s: fill the starting address of a memory.
 * @b: desired value
 * @n: number of bytes suppose to be changed
 * Return: chanaged array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
