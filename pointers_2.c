/*
/* Inputs each number from an input file and writes it
   rounded to 2 decimal places on a line of an output file.
*/


#include <stdio.h>

int main(void) {
	FILE *inp;		/*pointer to input file*/
	FILE *outp;		/*pointer to output file*/
	double item;	/*input number*/
	int status; 	/* status value returned by fscanf */

/* Prepare files for input or output */
	inp = fopen("indata.txt", "r");  	//inp is holding the memory location
	outp = fopen("outdata.txt", "w");


/* Input each item, format it, and write it */
	status = fscanf(inp, "%lf", &item);

	while (input_status == 1)
	{
		fprintf(outp, "%.2f\n", item);
		status = fscanf(inp, "%lf", &item);
	}

	/* Close the files */
	fclose(inp);
	fclose(outp);

	return 0;
}
