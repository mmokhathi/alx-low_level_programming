#include "main.h"

/**
 * void print_alphabet_x10(void) - prints alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int i;
	char ch;

	i = 0;

	while (i <= 9)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}

