#include "main.h"
/**
 * main - lsls
 *
 * Return: dlld
 */
int main(void)
{
	int i;
	char put[] = "putchar";

	for (i = 0; i < strlen(put); i++)
	{
		printf("%c", put[i]);
	}
	putchar('\n');
	return (0);
}
