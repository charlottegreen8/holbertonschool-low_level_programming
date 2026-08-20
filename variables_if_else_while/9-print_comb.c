#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
	int a;
	int b;
	int c;

	a = '0';
	b = ',';
	c = 32;

		while (a >= '0' && a <= '9')
		{
			putchar(a);
			a++;
			putchar(b);
			putchar(c);
		}

	putchar('\n');
	return (0);
}
