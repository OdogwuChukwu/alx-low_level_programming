#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = (5);
	int *numPtr = &num;

	printf("Before: %d\n", num);  /* Output: Before: (5) */
	reset_to_98(numPtr);
	printf("After: %d\n", num);   /* Output: After: (98) */

	return (0);
}
