#include "main.h"
#include <stdio.h>
/**
 *  _strlen - function that returns the length of a string.
 * @s: The string to print
 * Return: length
 */
int _strlen(char *s)
{
int longi = 0;
	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
