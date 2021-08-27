#include <stdio.h>

/**
 * main - prints alphabet in lower case then in upper case
 * return: Always zero (Success)
 */
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
		putchar(ch);
	for (ch = 65; ch <= 90; ch++)
		putchar(ch);
	putchar ('\n');
	return (0);
}
