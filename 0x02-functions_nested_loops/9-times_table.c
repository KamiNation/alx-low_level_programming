#include "main.h"
#define SIZE 10
/**
 * main - print multiplication table
*/
void times_table(void)
{
	int row, column;
	int foo[SIZE][SIZE]; /* 2 dim array */

	for (row = 0; row < SIZE; ++row)
		/* loop over each column */
		for (column = 0; column < SIZE; ++column)
			foo[row][column]  = (row * column)
				/* print the table */
				for (row = 0; row < SIZE; ++row)
				{
					for (column = 0; column < SIZE; ++column)
						printf("%d ", foo[row][column]);
					putchar('\n');
				}
	return (0);
}
