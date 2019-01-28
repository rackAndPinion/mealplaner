#include <stdlib.h>
#include <stdio.h>

#include "food.h"

int max_ID = 0;

struct Food *newfood(struct Food *food)
{

	/* Allocate space for new element/node: */
  max_ID++;

  struct Food *new_food = (struct Food *)malloc(sizeof(struct Food));

	printf("Name: ");
	scanf("%s",new_food->name);
	printf("Carbohydrates: ");
	scanf("%i",&new_food->carbohydrates);
	printf("protin: ");
	scanf("%i",&new_food->protin);
	printf("fat: ");
	scanf("%i",&new_food->fat);

  new_food->ID = max_ID;
 /* We increment since we just added a beer */
	return new_food;
}

void seefood(struct Food *food)
{
        printf("Name: %s\n", food->name);
        printf("Carbohydrates: %d\n", food->carbohydrates);
        printf("protin: %d\n", food->protin);
        printf("fat: %d\n\n", food->fat);
}

void printfoodlist(struct List *list)
{
  int n = 1;
  while(list != NULL)
  {
    printf( "%d) %s\n" , n , ((struct Food *)list->head)->name );
    list = list->next;
    n++;
  }
  printf("\n");
}

struct Food *getfood(struct List *list, int number)
{
  for(int i = 0; i < number; i++)
  {
    list = list->next;
  }
  return (struct Food *) list->head;
}
