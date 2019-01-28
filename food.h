#ifndef FOOD_H
#define FOOD_H

#include "list.h"

struct Food
{
    int ID;

    char name[20];
    int carbohydrates ;
    int protin;
    int fat;
};

//const struct Food RDA = {"\0", 2000, 2000, 2000, NULL};


void seefood(struct Food *food);
struct Food *newfood(struct Food *food);
void printfoodlist(struct List *list);
struct Food *getfood(struct List *list, int number);

#endif
