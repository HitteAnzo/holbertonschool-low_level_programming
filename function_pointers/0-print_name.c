#include <stddef.h>
#include "main.h"

/**
 * print_name - function to print a name using function pointer. MLP
 * @name: pointer to a string (name) to be printed.
 * @f: pointer to a function that takes a char pointer as a parameter.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}