#include "main.h"
/**
 * print_numbers - print numbers from 0 /9
 *
 * Return: 0
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		putchar('\n');
	}
}
