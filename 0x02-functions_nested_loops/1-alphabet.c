#include "main.h"

/**
 * main - prints lowercase alphabet followed by new line
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int ch;
	for(ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
