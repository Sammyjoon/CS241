/*
* Displays each elemental component of a compound */
#include <stdio.h> 
#include <string.h>

#define CMP_LEN 30       /* size of string to hold a compound */ 
#define ELEM_LEN 10      /* size of string to hold a component */

int main(void) 
{
char compound[CMP_LEN]; /* string representing a compound */ 
char elem[ELEM_LEN];    /* one elemental component */ 
int first, next;        /* Gets data string representing compound */
  
printf("Enter a compound> ");
scanf("%s", compound);    /* Displays each elemental component. These are identified by an initial capital letter. */
first = 0;
  
for (next = 1; next < strlen(compound); ++next)
  if (compound[next] >= 'A' && compound[next] <= 'Z') 
  {
      strncpy(elem, &compound[first], next - first);
      elem[next - first] = '\0'; 
      printf("%s\n", elem); 
      first = next;
  }
  /* Displays the last component */
printf("%s\n", strcpy(elem, &compound[first])); 
return (0);
}