#include "main.h"

/**
 * 2-strlen.c - returns the length of a string.
 * @s: input string
 * Description: by its very length defends itself against risk of being read.
 * Return: length of a string.
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
