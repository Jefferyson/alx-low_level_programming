#include "main.h"

/**
 * print_triangle - print triangle
 * @size: size parameter of triangle
 * Return: return nothing
 */

void print_triangle(int size)
{
	int row, hashes, spaces;

	if (size <= '0')
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (space = size - row; spaces >= 1; spaces--)
			{
				_putchar(' ');
			}
			for (hashes = 1; hashes <= row; hashes++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
