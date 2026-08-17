#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;

	i = 'z';

		while (i <= 'z' && i >= 'a')
		{
			putchar(i);
			i--;
		}

	putchar('\n');
	return (0);
}
