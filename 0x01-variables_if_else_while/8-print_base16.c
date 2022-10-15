#include <stdio.h>
/**
 * main-Entry point
 *
 * Return:Always 0 (success)
 */
int main(void)
{
	int x;
	char y;

	y = 'a';
	while (x <= 9)
	{
		putchar(x + '0');
		x++;
	}
	while (y < 'f')
	{
		 putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
