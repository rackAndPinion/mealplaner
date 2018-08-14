#include <stdlib.h>
#include <stdio.h>

#include "food.h"

struct Food *newfood(struct Food *food)
{

	/* Allocate space for new element/node: */
  struct Food *new_food = (struct Food *)malloc(sizeof(struct Food));

	printf("Name: ");
	scanf("%s",new_food->name);
	printf("Carbohydrates: ");
	scanf("%i",&new_food->carbohydrates);
	printf("protin: ");
	scanf("%i",&new_food->protin);
	printf("fat: ");
	scanf("%i",&new_food->fat);
 /* We increment since we just added a beer */
	return new_food;
}

void seefood(struct Food *food)
{
        printf("Name: %s\n", food->name);
        printf("Carbohydrates: %d\n", food->carbohydrates);
        printf("protin: %d\n", food->protin);
        printf("fat: %d\n", food->fat);
        food = food->next;
}
