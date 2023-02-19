#include <stdio.h>
int main(void)
{
	char c;
	short s;
	int i;
	long l;
	float f;

	printf("The size of char is %ld byte\n", sizeof(c));
	printf("The size of short is %ld byte\n", sizeof(s));
	printf("The szie of int is %ld byte\n", sizeof(i));
	printf("The size of long is %ld byte\n", sizeof(l));
        printf("The sixe of float is %ld byte\n", sizeof(f));
        return (0);
}	
