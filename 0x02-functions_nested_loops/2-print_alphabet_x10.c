#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - write the the lower-case alphabet on a line.
 *
 */
int main(void) {
void print_alphabet_x10(void) {

	char c;
	int i;

	for (i = 0; i < 10 ; i++)
	{
		for (c = 'a' ; c <= 'z' ; c++)
		{
			putchar(c);
		}
		putchar('\n');
	}
}
}
