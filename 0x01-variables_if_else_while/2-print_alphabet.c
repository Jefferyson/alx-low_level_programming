#include <stdio.h>
/**
 * main-Entry point
 *
 * Return:Always zero (success)
 */
int main(void)
{
	char i;

	for (i = 'a', i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar("\n");
	return (0);
}
