#include <stdio.h>
#include "main.h"

/**
 * print_line - prints _ n times
 * @n: number of times
 * Return: void
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
