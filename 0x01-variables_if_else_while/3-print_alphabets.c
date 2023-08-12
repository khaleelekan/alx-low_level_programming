#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
gchar ch = 'a';
	char chUpper = 'A';

	while (ch <= 'z')
	{
	putchar(ch);
	ch++;
	}
	while (chUpper <= 'Z')
	{
	putchar(chUpper);
	chUpper++;
	}
	putchar('\n');
	return (0);
}
