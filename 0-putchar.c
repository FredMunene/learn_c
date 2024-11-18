#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * prints -putchar followed by a new line
 *
 * returns: always 0 (Success)
 */

int main(void)
{
	char ch[8] = "_putchar";
	int m;

	for (m = 0; m < 8; m++)
	_putchar(ch[m]);
	_putchar('\n');
	return (0);
}
