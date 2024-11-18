#include <ctype.h>
#include <string.h>
#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char letters[27] = "abcdefghijklmnopqrstuvwxyz";
	size_t i = 0;
	int check = 0;

	while (check == 0)
	{
	while ((i < strlen(letters)) && (check == 0))
	{
		putchar(letters[i]);
		i = i + 1;
	}
	check = check + 1;
	i = (i / i) - 1;
	while ((i < strlen(letters)) && (check == 1))
	{
	putchar(toupper(letters[i]));
	i = i + 1;
	}
	}
	putchar('\n');
	return (0);
}
