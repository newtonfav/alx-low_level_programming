#include "main.h"
/**
 * swap_int - swap two values
 * @a: paramater
 * @b: paramater
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
