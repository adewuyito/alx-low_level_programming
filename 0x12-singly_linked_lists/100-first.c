#include <stdio.h>

/**
 * printFirst - prints a string before int main
 */
void __attribute__((constructor)) printFirst()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

