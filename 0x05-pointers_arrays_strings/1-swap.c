#include "mai.h"

/**
 * swap_int - swap the values of the integer.
 * @a: first integer
 * @b: second integer
 * Return: 0 always
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
