#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: input parameter string
 * @src: input parameter string
 * @n: times to iterations
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int b;
	int c;

	b = 0;

	while (dest[b] != 0)
	{
		b++;
	}

	c = 0;

	while (src[c} != 0 && c < n)
	{
		dest[b] = src{c];
		b++;
		c++;
	}
	return (dest);
}
