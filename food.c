#include "food.h"

struct Food addfood(struct Food food)
{
  //new pointer to point at the new begining
  struct Food *new_food;
  /* Allocate space for new element/node: */
  new_food = (struct Food *)malloc(sizeof(struct Food));
  /* Insert new element/beer before any other element: */
  new_food->next=food;

  printf("Name: ");
  scanf("%s",new_food->name);
  printf("Carbohydrates: ");
  scanf("%i",&new_food->carbohydrates);
  printf("protin: ");
  scanf("%i",&new_food->protin);
  printf("fat: ");
  scanf("%i",&new_food->fat);
 /* We increment since we just added a beer */
  return new_beer;
}
