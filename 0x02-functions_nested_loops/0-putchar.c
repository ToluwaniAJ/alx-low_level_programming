#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: It prints _putchar, followed by a new line.
 *
 * Return: 0.
 */
int main(void)
{
	char str[] = "_putchar";
	int length = strlen(str), i;

	for (i = 0; i < 8; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

	return (0);
}
