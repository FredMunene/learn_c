#include <ctype.h>
#include <string.h>
#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0
 */
int main(void)
{
	char letters[25] = "abcdfghijklmnoprstuvwxyz";
	size_t i = 0;

	while (i < strlen(letters))
	{
		putchar(letters[i]);
		i = i + 1;
	}
	putchar('\n');
	return (0);
}
