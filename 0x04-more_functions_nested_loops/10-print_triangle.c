#include "main.h"

/**
 * print_triangle - function that print a triangle
 * @size: assigned to int
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
        for (i = 1; i <= size; i++)
	{
	for (j = size - i; j >= 1; j--)
	{
	_putchar(' ');
	}
	for (k = 1; k <= 1; k++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}
