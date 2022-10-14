#include <stdio.h>
/**
 * main - lsls
 *
 * Return: ldld
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'j'; i++)
	{
		if (i == 'e' || i == 'q')
		{
			continue;
		}
		putchar(i);
	}
	putchar('\n');
	return (0);
}
