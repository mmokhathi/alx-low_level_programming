#include <stdio.h>

/**
 * main - prints single digit decimal numbers
 * return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
