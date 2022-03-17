#include "main.h"

/**
 * _isupper -checks for uppercase characters.
 * @c: The character to checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */
int_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
