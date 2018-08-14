#ifndef FOOD_H
#define FOOD_H

struct Food
{
    char name[20];
    int carbohydrates;
    int protin;
    int fat;

    struct Food *next;
};


void seefood(struct Food *food);
struct Food *newfood(struct Food *food);

#endif
