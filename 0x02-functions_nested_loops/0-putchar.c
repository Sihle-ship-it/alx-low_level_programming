#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints "_putchar"
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch[] = "_putchar";
	int i;

	for (i = 0; ch[i] != '\0'; i++)
	{
		_putchar(ch[i]);
	}

	_putchar('\n');
	return (0);
}
