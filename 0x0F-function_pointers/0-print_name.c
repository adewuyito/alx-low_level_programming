#include "function_pointers.h"

/**
* print_name - prints a string
* @name: the name to print
* @f: the function to call
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
