/*
 ============================================================================
 Name        : fibonacci.c
 Author      : Sammie Omranian
 Version     :
 Copyright   : Your copyright notice
 Description : Fibonacci
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int fibonacci(int n);

int main(void) {
	int n;
	printf("Fibonacci numbers are: \n1,1,2,3,5,8,13,21,33,54,...");
	printf("\n\nEnter a number: ");
	scanf("%d", &n);
	printf("\nf(%d) = %d", n, fibonacci(n));
	return 0;
}
/*
* Computes the nth Fibonacci number * Pre: n > 0
*/
int fibonacci(int n) {
	int ans;
	if (n == 1 || n == 2)
		ans = 1;
	else
		ans = fibonacci(n - 2) + fibonacci(n - 1);
	return (ans);
}
