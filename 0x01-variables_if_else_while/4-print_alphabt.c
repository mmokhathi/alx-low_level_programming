#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
		if (ch != 101 && ch != 113)
			putchar(ch);
	putchar('\n');
	return (0);
}
