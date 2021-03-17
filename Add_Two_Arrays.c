/*
 ============================================================================
 Name        : Add_Two_Arrays.c
 Author      : Sammie Omranian
 Version     :
 Copyright   : Your copyright notice
 Description : Adds corresponding elements of arrays ar1 and ar2,
 	 	 	 	storing the result in
				arsum. Processes first n elements only.
				Pre: First n elements of ar1 and ar2 are defined.
				arsum’s corresponding actual argument
				has a declared size >= n (n >= 0)
 ============================================================================*/

#include <stdio.h>
#include <stdlib.h>

void fill_array (int list[], int);
void add_arrays(int ar1[], int ar2[],int arsum[], int);

int main(void) {

	int size;

	printf("Please enter the size of the array: ");
	scanf("%d", &size);

	int ar1[size], ar2[size], arsum[size];

	printf("Let's fill the first array:\n");
	fill_array(ar1, size);

	printf("Let's fill the second array:\n");
	fill_array(ar2, size);
	add_arrays(ar1, ar2, arsum, size);

	int i;
	printf("Sum of the two arrays is:\n");
	printf("[");
	for (i = 0; i < size; ++i){
		if (i == size - 1)
			printf("%d", arsum[i]);
		else
			printf("%d, ", arsum[i]);
	}
	printf("]");

	return 0;
}

/*
* Sets all elements of ar1 and ar2
*/
void fill_array (int list[],	/* output - list of n integers*/
					int n)			/* input - number of list elements*/
{
	int i;

	for (i = 0; i<n; ++i){
		printf("Please enter a number: ");
		scanf("%d", &list[i]);
	}
}

/*
 * This function takes in 2 arrays with the same size
 * and adds them together
 */
void add_arrays(int ar1[],
				int ar2[],
				int arsum[],
				int size)
{
	int i;
	for (i = 0; i < size; ++i)
		arsum[i] = ar1[i] + ar2[i];
}
