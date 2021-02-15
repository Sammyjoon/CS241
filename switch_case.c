/*
 ============================================================================
 Name        : switch_case.c
 Author      : Sammie Omranian
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*
* Reads serial number and displays class of ship
*/
#include <stdio.h>

int main(void)
{
	char class;      /* input - character indicating class of ship */

	/* Read first character of serial number */
	printf("Enter ship serial number> ");

	/* scan first letter */
	scanf("%c", &class);

	/* Display first character followed by ship class */
	printf("Ship class is %c: ", class);

	switch (class) {
	case 'B':
	case 'b':
		printf("Battleship\n");
		break;
	case 'C':
	case 'c':
		printf("Cruiser\n");
		break;
	case 'D':
	case 'd':
		printf("Destroyer\n");
		break;
	case 'F':
	case 'f':
		printf("Frigate\n");
		break;
	default:
		printf("Unknown\n");
	}
	return (0);
}
