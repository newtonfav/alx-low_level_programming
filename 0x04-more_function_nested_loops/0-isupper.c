#include "main.h"
/**
 * _isupper - check if a parameter is uppercase 
 *
 * Return: always return 0
 *
 * @c: any parameter
 */
int _isupper(int c)
{
	if (c >= "A" || c <= "Z")
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
