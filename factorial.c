/*
 ============================================================================
 Name        : factorial.c
 Author      : Sammie Omranian
 Version     :
 Copyright   : Your copyright notice
 Description : Factorial
 ============================================================================
 */

#include <stdio.h>
int factorial(int);

int main(void) {
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("\n%d! = %d", n, factorial(n));
	return 0;
}

int factorial (int n){
	if (n == 1)
		return 1;
	else
		return n*factorial(n-1);
}
