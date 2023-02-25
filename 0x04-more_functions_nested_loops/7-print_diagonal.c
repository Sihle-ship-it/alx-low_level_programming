#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int sl, sp; /* slash and space variable */

	if (n > 0)
	{
		for (sp = 0; sp < n; sp++)
		{
			for (sl = 0; sl < sp; sl++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
