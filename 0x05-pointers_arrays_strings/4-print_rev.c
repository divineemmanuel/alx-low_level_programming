#include "main.h"

/**
 * print_rev - function that prints a string,
 * in reverse, followed by a new line
 * @s: declaration of string
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
	{
	}
	for (c = c - 1; c >= 0; c--)
		_putchar(s[c]);
	_putchar('\n');

}
