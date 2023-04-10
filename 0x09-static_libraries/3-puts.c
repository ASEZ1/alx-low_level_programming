#include "main.h"

/**
 * _puts , prints a string, followed by a new line,
 * @str is pointer to the string to print
 * Return is void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
