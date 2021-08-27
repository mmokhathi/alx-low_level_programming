#include <stdio.h>
/**
 * main - returns alphabet in lower case, then in upper case
 * followed by a new line
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
