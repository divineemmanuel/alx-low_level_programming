#include "main.h"
#include <unistd.h>
/**
 * main - entry point
 * Description: prints _putchar followed by a newline
 *
 * Return: returns 0(successful)
 *
 */
int main(void)
{
	char charr[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(charr[i]);
	}
	_putchar('\n');
	return (0);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
