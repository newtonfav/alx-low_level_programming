#include "main.h"
/**
 * _abs -  returns the absolute value of a number
 *
 * @x: any integer
 *
 * Return: always return 0
 */
int _abs(int x)
{
	if (x < 0)
	{
		x = x * -1;
	}
	return (x);
}
