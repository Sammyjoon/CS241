/*
 ============================================================================
 Name        : PA5.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Project 5: Read and write a file
 ============================================================================
 */

#include <stdio.h>

/* function prototype */
	//TODO
void calc_area_perim(double, double, double*, double*);

int main(void) {

/*pointer to input file*/
  FILE *inp;

/*pointer to output file*/
  FILE *outp;

/*declare width, height, area, and perimeter as doubles*/
	double width, height, area, perimeter;

/* status value returned by fscanf */
	int input_status;

/* Prepare files for input or output */
	//TODO


/* Input each pair of items from the input file, calculate area and perimeter, and write it to file*/

  input_status = fscanf(inp, "%lf %lf", &width, &height);

	while (input_status > 0)
	{
		/* call function*/
		calc_area_perim(width, height, &area, &perimeter);

		/* print area and perimeter to the output file */
		//TODO

		/* input the next pair of items from the input file */
		//TODO

	}

	/* Close the files */
	fclose(inp);
	fclose(outp);

	return 0;
}

/* define function */
void calc_area_perim(double w, double h, double *areap, double *perimeterp){

	/* calculate area and perimeter of a rectangle */
	//TODO

}
