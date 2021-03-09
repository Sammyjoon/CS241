/*
 ============================================================================
 Name        : pointers_1.c
 Author      : Sammie Omranian
 Version     :
 Copyright   : Your copyright notice
 Description : Pointer's example_1: How to get the memory address of a variable.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int m = 25;
	char ch = 'g';
	printf("the memory address of m = %x \n", &m);
	printf("the memory address of ch = %x \n", &ch);
	return 0;
}
