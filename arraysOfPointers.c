/*
 ============================================================================
 Name        : arraysOfPointers.c
 Author      : Sammie Omranian
 Version     :
 Copyright   : Your copyright notice
 Description : Two Orderings of One List Using
  	  	  	  	  an Array of Pointers
 ============================================================================
 */
/*
* Maintains two orderings of a list of applicants:
* the original ordering of the data,
* and an alphabetical ordering accessed through
*  an * array of pointers.
*/

#include <stdio.h>
#include <string.h>
#define STRSIZ 30 /* maximum string length */
#define MAXAPP 50 /* maximum number of applications accepted */

int alpha_first(char *list[], int min_sub, int max_sub);
void select_sort_str(char *list[], int n);

int main(void) {
	char applicants[MAXAPP][STRSIZ]; /* list of applicants in the order in which they applied */
	char *alpha[MAXAPP];  /* list of pointers to applicants */
	int   num_app,			/* actual number of applicants */
	      i;
	char one_char;

	/* Gets applicant list */
	printf("Enter number of applicants (0 . . %d)\n> ", MAXAPP);
	scanf("%d", &num_app);
	do 		/* skips rest of line after number */
		scanf("%c", &one_char);
	while (one_char != '\n');

	printf("Enter names of applicants on separate lines of less than\n");
	printf(" 30 characters in the order in which they applied\n");
	for (i = 0; i < num_app; ++i)
		gets(applicants[i]);
	/* Fills array of pointers and sorts */
	for (i = 0; i < num_app; ++i)
		alpha[i] = applicants[i]; /* copies ONLY address */
	select_sort_str(alpha, num_app);

	/* Displays both lists */
	printf("\n\n%-30s%5c%-30s\n\n", "Application Order", ' ',
			"Alphabetical Order");
	for (i = 0; i < num_app; ++i)
		printf("%-30s%5c%-30s\n", applicants[i], ' ', alpha[i]);
	return(0);
}

/*
* Finds the index of the string that comes first alphabetically in
* elements min_sub..max_sub of list
* Pre: list[min_sub] through list[max_sub] are of uniform case;
* max_sub >= min_sub
* */

int alpha_first(char *list[],	/* input - array of pointers to strings */
			int min_sub,	/* input - minimum and maximum subscripts */
			int max_sub)	/* of portion of list to consider*/
{
	int first, i;
	first = min_sub;
	for (i = min_sub + 1; i <= max_sub; ++i)
		if (strcmp(list[i], list[first]) < 0)
			first = i;
	return (first);
}

/*
* Orders the pointers in array list so they access strings
* in alphabetical order
* Pre: first n elements of list reference strings of uniform case;
* n >= 0
*/

void select_sort_str(char *list[], int n)
{
	int fill, index_of_min;
	char *temp;

	for (fill = 0; fill < n-1; ++fill)
	{
		index_of_min = alpha_first(list, fill, n - 1);
		if (index_of_min != fill) {
			temp = list[index_of_min];
			list[index_of_min] = list[fill];
			list[fill] = temp;
		}
	}
}

