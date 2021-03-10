/*
 ============================================================================
 Name        : nestedLoop.c
 Author      : Sammie Omranian
 Version     :
 Copyright   : Your copyright notice
 Description : Nested loop
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	int i, j;
	int n = 5;

	for(i = 1; i <= n; ++i)
	{
		for (j = 0; j < i; ++j)
		{
			printf("*");
		}
		printf("\n");
	}
	/////////////////

	for(i = n; i > 0; --i)
	{
		for (j = 1; j < i; ++j)
		{
			printf("*");
		}
		printf("\n");
	}


	return (0);
}
