#ifndef RESEPI_H
#define RESEPI_H

#include "list.h"
#include "food.h"

//a structure to hold af food and an amount;
struct Foods
{
  struct Food *food;
  int amount_gr;
};

//the header for a resepi
struct Resepi
{
  char name[20];
  struct List *foods;
};

void printResepi(struct Resepi *resepi);
void addFoodToResepi(struct Resepi *resepi, struct Food *food);
struct Resepi *getResepi(struct List *list, int number);
struct Resepi * createResepi();
void printResepiList(struct List *list);


#endif
