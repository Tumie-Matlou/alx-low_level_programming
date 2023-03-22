#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints the name of a person
 * @name: the name of a person (function parameter)
 * @f: pointer to a function
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
	else
		return;
}
