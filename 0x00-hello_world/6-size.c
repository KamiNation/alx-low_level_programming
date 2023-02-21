#include <stdio.h>

/**
* main - print the size of the following type variables: char, short, int, long, float
*
* Description: using the main function
* this program prints the size of type var
* Return: 0
*/
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("The size of char: %ld byte(s)\n", sizeof(c));
	printf("The szie of int: %ld byte(s)\n", sizeof(i));
	printf("The size of long: %ld byte(s)\n", sizeof(li));
	printf("The size of long long: %ld byte(s)\n", sizeof(lli));
	printf("The sixe of float: %ld byte(s)\n", sizeof(f));
	return (0);
}
