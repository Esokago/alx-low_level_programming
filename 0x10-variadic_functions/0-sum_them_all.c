#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of arguments.
 *
 * Return: sum of the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{

	int s = 0, i = n;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
		s += va_arg(ap, int);

	va_end(ap);

	return (s);
}
