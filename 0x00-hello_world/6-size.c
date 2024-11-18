#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char            this_char;
	int             this_int;
	long            this_long;
	long long       this_longlong;
	float		this_float;

	printf("Size of a char: %lu byte(s)\n", sizeof(this_char));
	printf("Size of an int: %lu byte(s)\n", sizeof(this_int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(this_long));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(this_longlong));
	printf("Size of a float: %lu byte(s)\n", sizeof(this_float));

	return (0);
}
