#include"function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - exec a function.MLP
 * @array: pointer to array.
 * @size: size of array.
 * @action: pointer to a function taking an int pointer as parameter.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
		for (i = 0 ; i < size ; i++)
			action(*(array + i));
}
