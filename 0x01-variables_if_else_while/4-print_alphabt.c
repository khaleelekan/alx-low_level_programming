#include <stdio.h>

/**
 * main- a program that prints alphabets,
 * except q and e
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch != 'e' && ch != 'q')
	{
		putchar(ch);
	}
	ch++;
	return (0);
}
