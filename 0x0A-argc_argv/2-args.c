#include <stdio.h>
/**
 * main - prints all arguments
 * @argc: argument counter to an int
 * @argv: array that contains the program command line arguments
 * Return: Return always success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
