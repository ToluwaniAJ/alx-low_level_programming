#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints its name followed ny a new line
 * @argc: argument count
 * @argv: argument value
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
