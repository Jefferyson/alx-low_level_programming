#include "main.h"

/**
 * check - function that returns the natural square root of a number
 * @x: int
 * @y: int
 *
 * Return:int
 */
int check(int x, int y)
{
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);
	return (check(x + 1, y));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: The number to return the square root of
 *
 * Return: If n has a natural square root - the natural square root of n
 *	If n does not have a natural square root - -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
