#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
	char n;
	char o;

	n = 'a';
	o = 'A';

	while (n >= 'a' && n <= 'z')
	{
	putchar(n);
	n++;
	}

	while (o >= 'A' && o <= 'Z')
	{
	putchar(o);
	o++;
	}

	putchar('\n');
	return (0);
}
