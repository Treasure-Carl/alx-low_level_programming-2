#include "holberton.h"

/**
 * print_diagonal - check for a digit
 * @n : number of \\ to be printed
 * Return:void
 */

void print_diagonal(int n)
{

	int i = 0;

	while (i < n && n > 0)
	{
		for (int ii = 0; ii < i; ii++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i != 0)
		_putchar('\n');

}