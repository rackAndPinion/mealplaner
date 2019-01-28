#include <stdio.h>
#include <stdlib.h>

#include "resepi.h"

struct Resepi * createResepi()
{
  /* Allocate space for new element/node: */
  struct Resepi *new_resepi = (struct Resepi *)malloc(sizeof(struct Resepi));

	printf("Name: ");
	fgets(new_resepi->name, 20, stdin);
  new_resepi->foods = NULL;

	return new_resepi;
}


//prints the content of a resepi
void printResepi(struct Resepi *resepi)
{
  printf("%s:\n\n", resepi->name);
  printfoodlist(resepi->foods);
}

//adds an engridiens to a resepi
void addFoodToResepi(struct Resepi *resepi, struct Food *food)
{
  //new food to add
  struct Foods *foods = (struct Foods *)malloc(sizeof(struct Foods));
  foods->food = food;
  foods->amount_gr = 200;

  //add food to resepi List
  addNode(resepi->foods, foods, sizeof(struct Foods));
}

//returns resepi from resepi database
struct Resepi *getResepi(struct List *list, int number)
{
  for(int i = 0; i < number; i++)
  {
    list = list->next;
  }
  return (struct Resepi *) list->head;
}

void printResepiList(struct List *list)
{
  int n = 1;
  while(list != NULL)
  {
    printf( "%d) %s\n" , n , ((struct Resepi *)list->head)->name );
    list = list->next;
    n++;
  }
  printf("\n");
}
