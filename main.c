#include <stdio.h>

#include "main.h"
#include "food.h"

int menu() {
   int nSelection;
   printf("Options:\n");
   printf("1) Add new food\n");
   printf("2) Remove food\n");
   printf("3) See all foods\n");
   printf("4) Stop program\n");
   scanf("%d",&nSelection);
   return nSelection;
}

int main() {
//opret database
struct food *beer;
beer=NULL;

int nSelection=0;

while (nSelection!=4) {
   nSelection=menu();

   if (nSelection==1){
       food = addfood(food);
   }
   else if (nSelection==2) {
      //printf("Which beer do you wanna remove? ");
      //scanf("%s",szType);
      //beer=removeBeer(beer,szType);
   }
   else if (nSelection==3) {
      //seeBeers(beer);
   }
}
return 0;
}
