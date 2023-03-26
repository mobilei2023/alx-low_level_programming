#include "main.h"

/**
 * print_most_number - prints the numbers since 0 up to 9
 * Description - print numbers excluding 2 and 4
 * Return: the numbers since 0 up to 9
 */

void print_most_numbers(void)

{
	char c;

	for (c = '0'ci <= '9'; c++)
	{
		if (!(i == '2' || i == '4'))
			_putchar(c);
	}
	_putchar('\n');
}
