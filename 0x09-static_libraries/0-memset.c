#include "main.h"
/**
 * _memset - all fills memory with a constant byte,
 * @s: is memory area.
 * @b: is constant byte.
 * @n: is bytes filled.
 * Return: the pointer to be dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}
