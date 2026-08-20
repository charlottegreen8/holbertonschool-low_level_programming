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

	a = '0';
	b = 'a';

		while (a >= '0' && a <= '9')
		{
			putchar(a);
			a++;
		}
		while (b >= 'a' && b <= 'f')
		{
			putchar(b);
			b++;
		}

	putchar('\n');
	return (0);
}
