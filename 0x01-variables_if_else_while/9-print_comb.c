#include <stdio.h>
/**
 * main - lsls
 *
 * Return: ldld
 */
int main(void)
{
	int num;
	
	for (num = '0'; num <= '9'; num++)
	{
		if (num == '9')
			break;
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
