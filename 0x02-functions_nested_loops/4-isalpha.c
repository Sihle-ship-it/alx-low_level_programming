#include "main.h"

/**
 * _isalpha - Returns 1 if c is a letter
 * @c: integer to be tested
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
