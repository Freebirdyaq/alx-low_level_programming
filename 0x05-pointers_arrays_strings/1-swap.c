#include "main.h"

/**
 * swap_int - swaps the values of two intergers.
 * @a: first interger.
 * @b: second interger.
 * Return: no return.
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
