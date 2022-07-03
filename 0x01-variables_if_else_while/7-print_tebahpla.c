#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 * Return: always 0
 */
int main(void)
{
	char n;

	for (n = 'z'; n <= 'a'; n--)
	{
		putchar(n);
	}
	putchar(10);
return (0);
}

