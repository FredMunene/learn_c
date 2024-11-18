#include <ctype.h>
#include <string.h>
#include <stdio.h>
/**
 *main - Entrry point
 *
 *Return: Always 0
 */
int main(void)
{
	int i = 48;

	while (i != 58)
	{
		putchar(i);
		i = i + 1;
	}
	i = 97;
	while (i != 103)
	{
		putchar(i);
		i = i + 1;
	}
	putchar('\n');
	return (0);
}
