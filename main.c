#include <stdio.h>

#include "main.h"
#include "food.h"
#include "list.h"

int menu() {
   int nSelection;
   printf("Options:\n1) Add new food\n2) Remove food\n3) see food\n4) loade food database\n5) save food database\n6) exit program\n");
   scanf("%d",&nSelection);
   return nSelection;
}

int main() {
//opret database
struct List *food_list;
food_list=NULL;
//food = loadfood();
int nSelection=0;

while (nSelection!=6) {
   nSelection=menu();

   if (nSelection==1){
      struct Food *food = newfood(food);
      food_list = addNode(food_list, food, sizeof(struct Food));
   }
   else if (nSelection==2) {
      //printf("Which beer do you wanna remove? ");
      //scanf("%s",szType);
      //beer=removeBeer(beer,szType);
   }
   else if (nSelection==3){
     struct List *food_list_loop = food_list;
     while(food_list_loop != NULL)
     {
       seefood((struct Food *)food_list_loop->head);
       food_list_loop = food_list_loop->next;
     }
   }
   else if (nSelection==4) {

      food_list = loadList(sizeof(struct Food));
   }
   else if (nSelection==5) {
      savelist(food_list, sizeof(struct Food));
   }
}
return 0;
}
