#include "main.h"

/**
 * _puts -prints a string
 * @str: string to print
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\n')
	{
	_putchar(*str++);
	}
	_putchar('\n');
}
