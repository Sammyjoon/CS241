/*
 ============================================================================
 Name        : getFullLine.c
 Author      : Sammie Omranian
 Version     :
 Copyright   : Your copyright notice
 Description : Demonstration of Whole-Line Input
 ============================================================================
 */
/*
* Numbers and double spaces lines of a document.
* Lines longer than * LINE_LEN - 1 characters are
*  split on two lines.
*/

#include <stdio.h>
#include <string.h>

#define LINE_LEN 80
#define NAME_LEN 40

int main(void) {
	char line[LINE_LEN],
			inname[NAME_LEN],
			outname[NAME_LEN];
	FILE *inp, *outp;
	char *status;
	int i = 0;

	printf("Name of input file> ");
	scanf("%s", inname);
	printf("Name of output file> ");
	scanf("%s", outname);

	inp = fopen(inname, "r");
	outp = fopen(outname, "w");

	for (status = fgets(line, LINE_LEN, inp); status != 0; status = fgets(line, LINE_LEN, inp))
	{
		if (line[strlen(line) - 1] == '\n')
			line[strlen(line) - 1] = '\0';
		fprintf(outp, "%3d>> %s\n\n", ++i, line);
	}
	return (0);
}
