#include "main.h"

/**
 * print_number - Prints a number
 * @n: assigned int
 * Return: 0
 */

void print_number(int n)
{
	unsigned int a, b, count;

	if (n < 0)
	{
		_putchar(45);
		a = n * -1;
	}
	else
	{
		a = n;
        }
		b = a;
		count = 1;
	while (b > 9)
	{
		b /= 10;
		count *= 10;
	}
	for (; count >= 1; count /= 10)
	{
		_putchar(((a / count) % 10) + 48);
	}

	
}
