#include "main.h"

/**
 * main - print alphabet 10 
 * times
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
    char alphabet;
	int i = 0;

	while (i <= 9)
	{
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	_putchar(alphabet);
	}
	_putchar('\n');
	i++;
	}
}
