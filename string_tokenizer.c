#include <stdio.h>
#include <string.h>

int main(void) {
  char *last, *first, *middle;
  char pres[20] = "Adams, John Quincy";
  char pres_copy[20];
  strcpy(pres_copy, pres);
  last = strtok(pres_copy, ", ");
  first = strtok(NULL, ", ");
  middle = strtok(NULL, ", ");

  printf("Last: %s\n", last);
  printf("Middle: %s\n", middle);
  printf("First: %s", first);
  
  return 0;
}