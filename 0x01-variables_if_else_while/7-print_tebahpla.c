#include <stdio.h>
/**
 * main-Entry point
 *
 * Return:Always 0 (success)
 */
int main(void)
{
	int x;

	x = 'z';
	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
