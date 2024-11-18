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
	int i = 122;

	while (i != 96)
	{
		putchar(i);
		i = i - 1;
	}
	putchar('\n');
	return (0);
}
