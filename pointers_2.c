/*
 ============================================================================
 Name        : pointers_2.c
 Author      : Sammie Omranian
 Version     :
 Copyright   : Your copyright notice
 Description : declare and initialize a pointer
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	int m = 25;
	int *p;
	p = &m;
	printf("The address stores in p is: %x ", p);
	printf("\n\tThe address of m is: %x ", &m);

	return (0);
}
