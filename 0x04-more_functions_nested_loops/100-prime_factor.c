#include <stdio.h>

/**
 * main - prints the largest prime factor
 * of a number
 * Return: returns 0
 */

int main(void)
{
	long i, num = 612852475143;

	for (i = 2; i <= num; i++)
	{
	if (num % i == 0)
	{
	num = num / i;
	i--;
	}
	}
	printf("%lu\n", i);
	return (0);	
}
