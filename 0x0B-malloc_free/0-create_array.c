#include "main.h"
#include <stdio.h>

/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char
 * @size: the size of the array
 * @c: initial value
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int x;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		array[index] = c;

	return (array);
}
