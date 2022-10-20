#include "main.h"
/**
 * print_most_numbers - print numbers from 0 -9 except 2 & 4
 *
 * Return: !:'smsm
 */
void print_most_numbers(void)
{
	char i;

	for (i = '0'; i < '10'; i++)
	{
		if (i == '2' || i == '4')
			continue;
		_putchar(i);
	}
	_putchar('\n');
}
