#include "main.h"
/**
 * _memcpy , copies memory area,
 * @dest is destination memory area.
 * @src is source memory area.
 * @n is bytes filled.
 * Return: the pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}
