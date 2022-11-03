#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * @s: the string to be printed
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
