#include "oluzingh"

/**
 * main - function to print
 *
 * Return: 0
 */
int main(void)
{
	char oluzingh[8] = {'o', 'l', 'u', 'z', 'i', 'n', 'g', 'h'};
	unsigned int c;

	for (c = 0; c < sizeof(oluzingh); c++)
{
	_putchar(oluzingh[c]);
}
	_putchar('\n');
	return (0);
}
