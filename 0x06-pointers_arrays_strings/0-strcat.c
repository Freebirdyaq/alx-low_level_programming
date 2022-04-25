#include "main.h"

/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: to dest.
 */

char *_strcat(char *dest, char *src)
{
	int x, y;

	x = 0;

	while (dest[x] != '\0')
		x++;

	for (y = 0; src[y] != '\0'; y++)
	{
		dest[x] = src[y];
		x++;
	}

	dest[x] = src[y];
	
	return (dest);
}
