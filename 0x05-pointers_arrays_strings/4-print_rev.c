#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: string to print
 *
 * Return: void
 */

void print_rev(char *s)
{
	int c, y;

	y = 0;
	while (s[y] != '\0')
		y++;

	for (c = y - 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
