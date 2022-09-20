#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * @a: integer 1
 * @b: integer 2
 * Return: Always 0.
 */

void swap_int(int *a, int *b) 
{
	int c = *a;
	*a = *b;
	*b = c;
}
