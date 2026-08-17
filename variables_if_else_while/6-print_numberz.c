#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;

	i = 48;

		while (i >= 48 && i <= 57)
		{
			putchar(i);
			i++;
		}

	putchar('\n');
	return (0);
}
