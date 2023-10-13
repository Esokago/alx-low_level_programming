#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name as is
 * @name: the person name
 * @f: this is the pointer
**/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
