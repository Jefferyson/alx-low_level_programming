#include "main.h"
/**
 * _isalpha- check for char alphabets
 * @c: charto be checked
 * Return: 1 if c is a letter, lowercase or uppercase, else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
