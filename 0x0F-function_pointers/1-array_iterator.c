#include "function_pointers.h"

/**
* array_iterator - applys iteration of a function to an array
* @array: a pointer to the array
* @size: the size of the array
* @action: the pointer to the function
*
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
