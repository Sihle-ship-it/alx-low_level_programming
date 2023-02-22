#include "main.h"

/**
 * print_sign - Returns the sign of a number
 * @n: integer to be tested
 *
 * Return: 1 if n is positive, -1 if n is negative, 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
