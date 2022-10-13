/*
 * File: 0-sum_them_all.c
 * Auth: Omotosho Akanbi
 */

#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all the parameters.
 * @n: The number of parameters passesd to the function.
 * @...: A variable number of parameters to calculate the sum of.
 * Return: If n == 0 - 0.
 * 	otherwise - the sum of all parameters.
 */
int sum_them-all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int index, sum = 0;

	va_start(nums, n);

	for (index = 0; index < n; index++)
		sum += va_arg(nums, int);
	
	va_end(nums);

	return (sum);	
}
