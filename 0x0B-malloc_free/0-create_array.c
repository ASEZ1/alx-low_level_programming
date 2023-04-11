:#include "main.h"
#include <stdlib.h>

/**
 * create_array - of characters and initializes it with a given character.
 * @size: size of the array.
 * @ch: character to initialize the array with.
 *
 * Return: pointer to the array of characters, or NULL if allocation fails.
 */
char *create_array(unsigned int size, char ch)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = ch;

	return (arr);
}
