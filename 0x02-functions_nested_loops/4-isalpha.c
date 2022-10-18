#include "main.h"
/**
 * isalpha - lldldl
 *
 * @c: any parameter
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
