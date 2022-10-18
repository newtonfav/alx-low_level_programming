#include "main.h"
/**
 * print_to_98 - print numbers from a indicated value to 98
 *
 * @n: parameter
 *
 * Return: always 0
 */
void print_to_98(int n)
{
	int j;

	for (j = n; j <= 98; j++)
	{
		_putchar(j + '0');
		_putchar(',');
		_putchar(' ');
	}
}
