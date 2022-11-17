#include "function_pointers.h"

/**
 * array_iterator - executes a function .
 * @array: an array .
 * @size: size of the array .
 * @action: ptr .
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t p;

	if (array != NULL && action != NULL)
	{
		for (p = 0; p < size; p++)
		{
			action(array[p]);
		}
	}
}
