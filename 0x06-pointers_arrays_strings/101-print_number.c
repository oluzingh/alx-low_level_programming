#include "main.h"
/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int num;
	/*check if numbrt is negative*/
	num = n;
	if (n < 0)
	{
		_putchar(45);
		num = -n;
	}
	/* print number by recursion*/
	if (num / 10)
	{
		print_number(number / 10);
	}
	_putchar((num % 10) + '0');
}
