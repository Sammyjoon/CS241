/*
 ============================================================================
 Name        : FindMax.c
 Author      : Sammie Omranian
 Version     :
 Copyright   : Your copyright notice
 Description :	Returns the largest of the first n values in array list
 	 	 	 	Pre: First n elements of array list are defined and n > 0
 ============================================================================*/

#include <stdio.h>
#include <stdlib.h>

int get_max(int list[], int);
void fill_array (int list[], int);

int main(void) {

	int x_large, n;

	printf("Please enter the number of elements of array: ");
	scanf("%d", &n);

	int list[n];

	fill_array(list, n);
	x_large = get_max(list, n);
	printf("The maximum value is: %d", x_large); 


	return 0;
}

/*
* Sets all elements of its array 
* Pre: n (the number of elements) is defined.
* Post: list[i] = numbers entered by the user, for 0 <= i < n.
*/
void fill_array (int list[],	/* output - list of n integers*/
				int n)			/* input - number of list elements*/
{
	int i;
	printf("n= %d\n", n);
	for (i = 0; i<n; ++i){
		printf("Please enter a number: ");
		scanf("%d", &list[i]);
	}
}

int get_max(int list[], int n)	/* input - list of n integers */
{
	int i,
	cur_large; 		/* largest value so far */

	/* Initial array element is largest so far. */
	cur_large = list[0];

	/* Compare each remaining list element to the largest so far;
	save the larger */
	for (i = 1; i < n; ++i)
		if (list[i] > cur_large)
			cur_large = list[i];
	return (cur_large);
}
