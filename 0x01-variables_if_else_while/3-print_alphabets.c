#include <stdio.h>
/**
 * main-Entry point
 *
 * Return:Always 0 (success)
 */
int main(void)
{
	char y;
	char z;

	y = 'a';
	z = 'A';

	while (y <= 'z')
	{
		putchar(y);
		y++;
	}
	while (z <= 'Z')
	{
		putchar(z);
		z++;
	}
	putchar('\n');
	return (0);

}
