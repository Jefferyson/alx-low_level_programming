#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: string to print
 *
 * Return: void
 */

void print_rev(char *s)
{
	int x = strx(s);

	while (x--)
		_putchar(*(s + x));
	_putchar(10);
}
