/* Program demonstrating the use of an enumerated type */
#include <stdio.h>

typedef enum
  {entertainment, rent, utilities, food, clothing,
    automobile, insurance, miscellaneous}
expense_t;

void print_expense(expense_t expense_kind);

int main(void) 
{
  expense_t expense_kind;
  // expense_t expense_kind2;
  printf("Enter an expense code between 0 and 7.. "); 
  scanf("%d", &expense_kind);
  printf("Expense code represents "); 
  print_expense(expense_kind);
  printf(".\n");

  // expense_kind2 = (expense_t)(expense_kind + 1);
  // print_expense(expense_kind2);
  return (0); 
}

/*
* Display string corresponding to a value of type expense_t */
void
print_expense(expense_t expense_kind) 
{
  switch (expense_kind) { 
    case entertainment:
      printf("entertainment"); 
      break;
    case rent: 
      printf("rent");
      break;
    case utilities: 
      printf("utilities");
      break;
    case food: 
      printf("food");
      break;
    case clothing: 
      printf("clothing");
      break;
    case automobile: 
      printf("automobile");
      break;
    case insurance: 
      printf("insurance");
      break;
    case miscellaneous: 
      printf("miscellaneous");
      break;
    default:
      printf("\n*** INVALID CODE ***\n");
    }
  }
