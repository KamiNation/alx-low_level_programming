#include "main.h"
/**
* main - prints the sign of a number
*/

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		putchar('-');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
}
