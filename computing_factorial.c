/*
* Computes n!
* Pre: n is greater than or equal to zero
*/

#include <stdio.h>

// Function prototype
int factorial(int n);

int main(void) {

	int n;
	printf("Enter a number: ");
	scanf("%d" , &n);
	printf("Factorial is: %d", factorial(n));
}

int factorial(int n) {
	int i, product;   /* local variables */


/* accumulator for product computation */
	product = 1;

/* Computes the product n x (n-1) x (n-2) x ... x 2 x 1 */
	for (i = n; i > 1; --i) {
		product = product * i;
	}
/* Returns function result */
	return (product);
}
