#include "main.h"

/**
 * _memset - function
 * @s: char
 * @b: char
 * @n: int
 * Return: value s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
