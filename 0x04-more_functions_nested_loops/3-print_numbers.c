#include "main.h"

/**
 * print_numbers - prints numbers 0 to 9 followed by newline
 */
void print_numbers(void)
{
	char i;

	i = 48;
	while (i < 58)
	{
		_putchar(i);
		++i;
	}
	_putchar('\n');
}
