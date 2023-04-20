#include "function_pointers.h"
#include "3-calc.h"

/**
 * get_op_func - gets the current function to be executed
 * @s: pointer to the function to be executed
 *
 * Return: the current function pointer
 */
int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	i = 0;
	while (ops[i].op != NULL && *(ops[i].op) != *s)
	{
		i++;
	}
	return (ops[i].f);
}
