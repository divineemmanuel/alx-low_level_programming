#include "main.h"
/**
 * print_alphabet -- prints a-z
 *
 * Description: 1-alphabet.c - prints the alphabet in lowercase followed by
 *
 * aline
 *
 * Return:void
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
