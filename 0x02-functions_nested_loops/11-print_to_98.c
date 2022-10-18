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
	if (n >= 98)
	{
		while (n < 98)
		{
			printf("%d, ", n--);
		}
		printf("%d", n);
	}
	else
	{
		while (n > 98)
		{
			printf("%d, ", n++);
		}
		printf("%d", n);
	}
}
