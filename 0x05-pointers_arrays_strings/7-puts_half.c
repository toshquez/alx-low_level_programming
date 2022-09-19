#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string parameter input
 * Return: nothing
 */

void puts_half(char *str)
{
	int 1, n;

	for (1 = 0; str[1] != '\0'; ++1);
	if (1 % 2 == 0)
	{
		for (n = 1 / 2; str[n] != '\0'; ++n)
		_putchar(str[n]);
	} else
	{
		for (n = ((1 - 1) / 2 + 1; str[n] != '\0'; ++n)
		_putchar(str[n]);
	}
	_putchar('\n');	
}

