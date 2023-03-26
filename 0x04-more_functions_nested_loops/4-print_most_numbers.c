#include "main.h"

/**
 * print_most_number - prints the numbers since 0 up to 9
 * Description - print numbers excluding 2 and 4
 * Return: the numbers since 0 up to 9
 */

void print_most_numbers(void)

{
	int  i;

	for (i = 0; i <= 9; i++)
	{
		if (!(i == 2 || i == 4))
			_putchar(i);
	}
	_putchar('\n');
}
