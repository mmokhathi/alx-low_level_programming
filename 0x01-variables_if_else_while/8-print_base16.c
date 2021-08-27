#include <stdio.h>

/**
 * main - prints all base 16 numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, ch;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
