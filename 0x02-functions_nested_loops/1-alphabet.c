#include "main.h"

/**
 * print_alphabet - prints lowecase alphabet followed by new line
 */
void print_alphabet(void)
{
	char ch;

	for(ch = 'a';ch <= 'z';ch++)
		_putchar(ch);
	_putchar('\n');
}
