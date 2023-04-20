#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum of all its parameters
 * @n: number of parameters passed to the function
 * @...: a variable number of parameters to calculate the sum
 *
 * Return: if n == 0 - 0 otherwise the sum of all parameters
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
unsigned int i, sum = 0;
	va_start(app, n);
	for (i = 0; i < n; i++)
		sum += va_start(app, int);
	va_end(ap);
	return (sum);
}

