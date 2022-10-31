#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string to search
 * @accept: character to look for
 *
 * Return: number of bytes that matched at the start
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int sum = 0;
	char *ptr = accept;

	while (*s != 0)
	{
		if (*s == *ptr && *ptr != 0)
		{
			sum++;
			s++;
			ptr = accept;
		}
		else
			ptr++;
		if (*ptr == 0)
			return (sum);
	}
	return (sum);
}
